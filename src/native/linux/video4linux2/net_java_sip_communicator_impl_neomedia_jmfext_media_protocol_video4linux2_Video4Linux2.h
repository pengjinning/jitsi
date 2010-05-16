/*
 * SIP Communicator, the OpenSource Java VoIP and Instant Messaging client.
 *
 * Distributable under LGPL license.
 * See terms of license at gnu.org.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2 */

#ifndef _Included_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
#define _Included_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    close
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_close
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    ioctl
 * Signature: (IIJ)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_ioctl
  (JNIEnv *, jclass, jint, jint, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    memcpy
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_memcpy
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    mmap
 * Signature: (JIIIIJ)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_mmap
  (JNIEnv *, jclass, jlong, jint, jint, jint, jint, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    munmap
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_munmap
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    open
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_open
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_buffer_alloc
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1buffer_1alloc
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_buffer_getBytesused
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1buffer_1getBytesused
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_buffer_getIndex
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1buffer_1getIndex
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_buffer_getLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1buffer_1getLength
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_buffer_getMOffset
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1buffer_1getMOffset
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_buffer_setIndex
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1buffer_1setIndex
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_buffer_setMemory
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1buffer_1setMemory
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_buf_type_alloc
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1buf_1type_1alloc
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_capability_alloc
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1capability_1alloc
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_capability_getCapabilities
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1capability_1getCapabilities
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_capability_getCard
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1capability_1getCard
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_format_alloc
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1format_1alloc
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_format_getFmtPix
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1format_1getFmtPix
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    V4L2_PIX_FMT_RGB24
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_V4L2_1PIX_1FMT_1RGB24
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    V4L2_PIX_FMT_UYVY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_V4L2_1PIX_1FMT_1UYVY
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    V4L2_PIX_FMT_YUYV
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_V4L2_1PIX_1FMT_1YUYV
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_pix_format_getHeight
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1pix_1format_1getHeight
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_pix_format_getPixelformat
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1pix_1format_1getPixelformat
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_pix_format_getWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1pix_1format_1getWidth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_pix_format_setBytesperline
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1pix_1format_1setBytesperline
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_pix_format_setField
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1pix_1format_1setField
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_pix_format_setPixelformat
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1pix_1format_1setPixelformat
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_pix_format_setWidthAndHeight
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1pix_1format_1setWidthAndHeight
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_requestbuffers_alloc
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1requestbuffers_1alloc
  (JNIEnv *, jclass, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_requestbuffers_getCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1requestbuffers_1getCount
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_requestbuffers_setCount
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1requestbuffers_1setCount
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    v4l2_requestbuffers_setMemory
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_v4l2_1requestbuffers_1setMemory
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    VIDIOC_DQBUF
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_VIDIOC_1DQBUF
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    VIDIOC_G_FMT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_VIDIOC_1G_1FMT
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    VIDIOC_QBUF
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_VIDIOC_1QBUF
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    VIDIOC_QUERYBUF
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_VIDIOC_1QUERYBUF
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    VIDIOC_QUERYCAP
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_VIDIOC_1QUERYCAP
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    VIDIOC_REQBUFS
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_VIDIOC_1REQBUFS
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    VIDIOC_S_FMT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_VIDIOC_1S_1FMT
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    VIDIOC_STREAMOFF
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_VIDIOC_1STREAMOFF
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2
 * Method:    VIDIOC_STREAMON
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_jmfext_media_protocol_video4linux2_Video4Linux2_VIDIOC_1STREAMON
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
