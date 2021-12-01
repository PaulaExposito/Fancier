/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter */

#ifndef _Included_es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter
#define _Included_es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter
 * Method:    compileKernels
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter_compileKernels
  (JNIEnv *, jclass, jstring);

/*
 * Class:     es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter
 * Method:    releaseKernels
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter_releaseKernels
  (JNIEnv *, jclass);

/*
 * Class:     es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter
 * Method:    setupNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter_setupNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter
 * Method:    processGpu
 * Signature: (Les/ull/pcg/hpc/fancier/image/RGBAImage;Les/ull/pcg/hpc/fancier/image/RGBAImage;)V
 */
JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter_processGpu
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter
 * Method:    processCpu
 * Signature: (Les/ull/pcg/hpc/fancier/image/RGBAImage;Les/ull/pcg/hpc/fancier/image/RGBAImage;)V
 */
JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter_processCpu
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter
 * Method:    processArray
 * Signature: ([I[III)V
 */
JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter_processArray
  (JNIEnv *, jobject, jintArray, jintArray, jint, jint);

/*
 * Class:     es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter
 * Method:    releaseNative
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_es_ull_pcg_hpc_fancier_linuxtest_model_NativeImageFilter_releaseNative
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
