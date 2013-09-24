#include "config.h"

int ff_aac_coder_init_mips;
int ff_psdsp_init_arm;
int ff_psdsp_init_mips;
int ff_aacsbr_func_ptr_init_mips;
int ff_acelp_filter_init_mips;
int ff_acelp_vectors_init_mips;
int ff_libaacplus_encoder;
int ff_libxvid_encoder;
int ff_libxavs_encoder;
#if !CONFIG_LIBX264
 int ff_libx264rgb_encoder;
 int ff_libx264_encoder;
#endif
int ff_libwavpack_encoder;
int ff_libvpx_vp9_decoder;
int ff_libvpx_vp9_encoder;
int ff_libvpx_vp8_decoder;
int ff_libvpx_vp8_encoder;
int ff_libvorbis_decoder;
int ff_libvorbis_encoder;
int ff_libvo_amrwbenc_encoder;
int ff_libvo_aacenc_encoder;
int ff_libutvideo_decoder;
int ff_libutvideo_encoder;
int ff_libtwolame_encoder;
int ff_libtheora_encoder;
int ff_libstagefright_h264_decoder;
int ff_libspeex_decoder;
int ff_libspeex_encoder;
int ff_libshine_encoder;
int ff_libschroedinger_decoder;
int ff_libschroedinger_encoder;
int ff_libopus_decoder;
int ff_libopus_encoder;
int ff_libopenjpeg_decoder;
int ff_libopenjpeg_encoder;
int ff_libopencore_amrwb_decoder;
int ff_libopencore_amrnb_decoder;
int ff_libopencore_amrnb_encoder;
int ff_libmp3lame_encoder;
int ff_libilbc_decoder;
int ff_libilbc_encoder;
int ff_libgsm_ms_decoder;
int ff_libgsm_ms_encoder;
int ff_libgsm_decoder;
int ff_libgsm_encoder;
int ff_libfdk_aac_encoder;
int ff_libfaac_encoder;
int ff_libcelt_decoder;
int ff_zmbv_decoder;
int ff_zmbv_encoder;
#if !CONFIG_ZLIB
 int ff_zlib_decoder;
 int ff_zlib_encoder;
#endif
int ff_zerocodec_decoder;
int ff_wmv3_vdpau_decoder;
int ff_wmv3_crystalhd_decoder;
int ff_vc1_vdpau_decoder;
int ff_vc1_crystalhd_decoder;
int ff_tscc_decoder;
int ff_png_decoder;
int ff_png_encoder;
int ff_msmpeg4_crystalhd_decoder;
int ff_mpeg2_crystalhd_decoder;
int ff_mpeg1_vdpau_decoder;
int ff_mpeg_vdpau_decoder;
int ff_mpeg4_vdpau_decoder;
int ff_mpeg4_crystalhd_decoder;
int ff_mpeg_xvmc_decoder;
int ff_h264_vdpau_decoder;
int ff_h264_vda_decoder;
int ff_h264_crystalhd_decoder;
int ff_g2m_decoder;
int ff_flashsv2_decoder;
int ff_flashsv2_encoder;
int ff_flashsv_decoder;
int ff_flashsv_encoder;
int ff_exr_decoder;
int ff_dxa_decoder;
int ff_wmv3_vdpau_hwaccel;
int ff_wmv3_vaapi_hwaccel;
int ff_vc1_vdpau_hwaccel;
int ff_vc1_vaapi_hwaccel;
int ff_mpeg4_vdpau_hwaccel;
int ff_mpeg4_vaapi_hwaccel;
int ff_mpeg2_vdpau_hwaccel;
int ff_mpeg2_vaapi_hwaccel;
int ff_mpeg1_vdpau_hwaccel;
int ff_h264_vdpau_hwaccel;
int ff_h264_vda_hwaccel;
int ff_h264_vaapi_hwaccel;
int ff_h263_vdpau_hwaccel;
int ff_h263_vaapi_hwaccel;
int ff_libdc1394_demuxer;
int ff_libcdio_demuxer;
int ff_xv_muxer;
int ff_x11grab_demuxer;
int ff_v4l2_demuxer;
int ff_v4l2_muxer;
int ff_sndio_demuxer;
int ff_sndio_muxer;
int ff_sdl_muxer;
int ff_pulse_demuxer;
int ff_oss_demuxer;
int ff_oss_muxer;
int ff_openal_demuxer;
int ff_jack_demuxer;
int ff_iec61883_demuxer;
int ff_fbdev_demuxer;
int ff_dv1394_demuxer;
int ff_caca_muxer;
int ff_bktr_demuxer;
int ff_alsa_demuxer;
int ff_alsa_muxer;
int avfilter_vsrc_frei0r_src;
int avfilter_vf_zmq;
int avfilter_vf_vidstabtransform;
int avfilter_vf_vidstabdetect;
int avfilter_vf_subtitles;
int avfilter_vf_ocv;
int avfilter_vf_frei0r;
int avfilter_vf_drawtext;
int avfilter_vf_ass;
int avfilter_asrc_flite;
int avfilter_af_resample;
int avfilter_af_azmq;
int avfilter_af_asyncts;
int ff_librtmpte_protocol;
int ff_librtmpt_protocol;
int ff_librtmps_protocol;
int ff_librtmpe_protocol;
int ff_librtmp_protocol;
int ff_libquvi_demuxer;
int ff_libnut_demuxer;
int ff_libnut_muxer;
int ff_libmodplug_demuxer;
int ff_libgme_demuxer;
int ff_tls_protocol;
int ff_sctp_protocol;
int ff_https_protocol;
int ff_ffrtmpcrypt_protocol;
int ff_bluray_protocol;
int ff_avisynth_demuxer;
int swri_audio_convert_init_arm;
int ff_celp_filter_init_mips;
int ff_celp_math_init_mips;
int avresample_version;
int avresample_configuration;
int ff_dcadsp_init_arm;
int ff_fft_fixed_init_arm;
int ff_fft_init_arm;
int ff_fft_init_ppc;
int ff_fft_init_mips;
int ff_flacdsp_init_arm;
int ff_vdpau_h264_set_reference_frames;
int ff_vdpau_h264_picture_complete;
int ff_vdpau_h264_picture_start;
int ff_vdpau_add_data_chunk;
int ff_h264chroma_init_arm;
int ff_h264chroma_init_ppc;
int ff_h264dsp_init_arm;
int ff_h264dsp_init_ppc;
int ff_h264_pred_init_arm;
int ff_h264qpel_init_arm;
int ff_h264qpel_init_ppc;
int ff_iir_filter_init_mips;
int ff_xvmc_pack_pblocks;
int ff_xvmc_field_start;
int ff_xvmc_field_star;
int ff_xvmc_init_block;
int ff_xvmc_field_end;
int ff_xvmc_field_en;
int ff_vdpau_mpeg_picture_complete;
int ff_mpadsp_init_arm;
int ff_mpadsp_init_ppc;
int ff_mpadsp_init_mipsfpu;
int ff_mpadsp_init_mipsdspr1;
int ff_xvmc_decode_mb;
int ff_rdft_init_arm;
int ff_rtmpe_gen_pub_key;
int ff_rtmpe_compute_secret_key;
int ff_rtmpe_encrypt_sig;
int ff_rtmpe_update_keystream;
int ff_sws_init_swScale_altivec;
int ff_bfin_get_unscaled_swscale;
int ff_swscale_get_unscaled_altivec;
int ff_synth_filter_init_arm;
int ff_vdpau_vc1_decode_picture;
int ff_opencl_transform;
int ff_opencl_deshake_init;
int ff_opencl_deshake_uninit;
int ff_opencl_deshake_process_inout_buf;
int ff_opencl_apply_unsharp;
int ff_opencl_unsharp_init;
int ff_opencl_unsharp_uninit;
int ff_opencl_unsharp_process_inout_buf;
int ff_yuv2rgb_init_vis;
int ff_yuv2rgb_init_altivec;
int ff_yuv2rgb_get_func_ptr_bfin;
int ff_aacdec_init_mips;
int ff_ac3dsp_init_arm;
int ff_ac3dsp_init_mips;
int ff_get_cpu_flags_arm;
int ff_get_cpu_flags_ppc;
int ff_dsputil_init_arm;
int ff_dsputil_init_vis;
int ff_dsputil_init_alpha;
int ff_dsputil_init_ppc;
int ff_dsputil_init_sh4;
int ff_dsputil_init_bfin;
int ff_fmt_convert_init_arm;
int ff_fmt_convert_init_ppc;
int ff_fmt_convert_init_mips;
int ff_vdpau_mpeg4_decode_picture;
int ff_hpeldsp_init_alpha;
int ff_hpeldsp_init_arm;
int ff_hpeldsp_init_bfin;
int ff_hpeldsp_init_ppc;
int ff_hpeldsp_init_vis;
int ff_rv34dsp_init_arm;
int ff_rv40dsp_init_arm;
int ff_sbrdsp_init_arm;
int ff_sbrdsp_init_mips;
int ff_yuv2rgb_init_tables_altivec;
int ff_vc1dsp_init_ppc;
int ff_videodsp_init_arm;
int ff_videodsp_init_ppc;
int ff_vorbisdsp_init_ppc;
int ff_vorbisdsp_init_arm;
int ff_vp3dsp_init_arm;
int ff_vp3dsp_init_bfin;
int ff_vp3dsp_init_ppc;
int ff_vp56dsp_init_arm;
int ff_vp8dsp_init_arm;
int ff_vp8dsp_init_ppc;
int ff_unix_protocol;
int ff_libfdk_aac_decoder;
int ff_MPV_common_init_axp;
int ff_MPV_common_init_arm;
int ff_MPV_common_init_bfin;
int ff_MPV_common_init_ppc;
int ff_sws_init_swscale_ppc;
int ff_get_unscaled_swscale_bfin;
int ff_get_unscaled_swscale_ppc;
int ff_vp6dsp_init_arm;
int ff_yuv2rgb_init_bfin;
int ff_yuv2rgb_init_ppc;
int ff_yuv2rgb_init_tables_ppc;

int ff_libzvbi_teletext;
int avfilter_af_ladspa;
int ff_libssh_protocol;
int ff_libzvbi_teletext_decoder;