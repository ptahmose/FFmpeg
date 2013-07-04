 #! /bin/sh
 
 function tweakcygwinpath()
 {
    local tweaked
    if [[ $1 == *./tests/data/lavf/lavf.gxf ]];
    then
        echo "./tests/data/lavf/lavf.gxf"
    else
        if [[ $1 == *./tests/data/lavf/lavf.mkv ]];
        then
            echo "./tests/data/lavf/lavf.mkv"
        else
            if [[ $1 == */tests/vsynth1/00.pgm ]];
            then
                echo "./tests/vsynth1/00.pgm"
            else
                tweaked="$(cygpath -w $1)"
                echo "$tweaked"
            fi
        fi
    fi
 }
 
 cmd=$1
 
 declare -a argstweaked
 
 shift 1
 index=0
 for ARG in "$@"
 do
    if [[ $ARG == /cygdrive/* || $ARG == /home/* ]];
    then
        argstweaked[$index]=$(tweakcygwinpath $ARG)
    else
        if [[ $ARG == amovie=*/amrwb/seed-12k65.awb,silencedetect=d=-20dB ]];
        then
            filename=`echo "$ARG" | sed -E 's/amovie=(.*),.*|.*/\1/'`
            if [ ! -d "./temp" ]; then
                mkdir ./temp
            fi
            cp "$filename" ./temp/
            argstweaked[$index]="amovie=./temp/seed-12k65.awb,silencedetect=d=-20dB"
        else
            if [[ $ARG == amovie=*/filter/seq-3341-7_seq-3342-5-24bit.flac,ebur128=metadata=1 ]];
            then
                filename=`echo "$ARG" | sed -E 's/amovie=(.*),.*|.*/\1/'`
                if [ ! -d "./temp" ]; then
                    mkdir ./temp
                fi	
                cp "$filename" ./temp/
                argstweaked[$index]="amovie=./temp/seq-3341-7_seq-3342-5-24bit.flac,ebur128=metadata=1"
            else
                argstweaked[$index]=$ARG
            fi
        fi
    fi
    
    ((index++))
done

#echo $cmd "${argstweaked[@]}" >> /home/ffmpegbuild/log.txt

$cmd "${argstweaked[@]}"
