#! /bin/bash
 
if [[ $1 == icl ]];
     then
        cmd=icl.exe
elif [[ $1 == xilink ]];
     then
        cmd=xilink.exe
else
    echo "Must specify either compiler (icl) or linker (xilink)"
    exit 1
fi

declare -a argstweaked

shift 1

index=0
for((i=1;i<="$#";i++)) 
do
    ARG="${!i}"
    if [[ ! "$ARG" == -* ]];	#	string must not start with '-' 
    then
        arg2=${ARG//\\//}		#   replace backslashes with slashes
        if [[ "$arg2" == *.* && "$arg2" == */* ]];		# if we find a dot and a slash, then we consider it a filename
        then
            argstweaked[$index]="$(cygpath -w $ARG)"
        else
            argstweaked[$index]=$ARG
        fi
    elif [[ "$ARG" == -Fo:* ]];
    then
        argstweaked[$index]="-Fo:$(cygpath -w ${ARG:4})"
    elif [[ "$ARG" == -out:* ]];
    then
        if [[ $cmd == icl.exe ]];
        then
            argstweaked[$index]="-o:$(cygpath -w ${ARG:5})"
        elif [[ $cmd == xilink.exe ]];
        then
            argstweaked[$index]="-out:$(cygpath -w ${ARG:5})"
        fi
    elif [[ "$ARG" == -out && $cmd == xilink.exe ]];
    then
        ((i++))
        argstweaked[$index]=-out:$(cygpath -w ${!i})
    else
        if [[ $cmd != xilink.exe || ( "$ARG" != -Wl,--as-needed && "$ARG" != -Wl,--warn-common && "$ARG" != -Wl,-rpath-link=* )]];
        ##if [[ ! $cmd == xilink.exe && ! "$ARG" == -Wl,--as-needed && ! "$ARG" == -Wl,--warn-common ]];
        then
            argstweaked[$index]=$ARG
        fi
    fi
    
    #echo $ARG
    
    ((index++))	
done

#if [[ ${argstweaked[$index-1]} == *error_resilience.c ]];
#then
#	temp=${argstweaked[$index-1]}
#	argstweaked[$index-1]=-Ob0
#	argstweaked[$index]=$temp
#fi

PATH=${PATH/\/usr\/bin/}
export PATH

#echo ${argstweaked[*]}	
$cmd ${argstweaked[@]}

