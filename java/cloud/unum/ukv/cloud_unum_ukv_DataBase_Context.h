/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cloud_unum_ukv_DataBase_Context */

#ifndef _Included_cloud_unum_ukv_DataBase_Context
#define _Included_cloud_unum_ukv_DataBase_Context
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cloud_unum_ukv_DataBase_Context
 * Method:    open
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cloud_unum_ukv_DataBase_00024Context_open(JNIEnv*, jobject, jstring);

/*
 * Class:     cloud_unum_ukv_DataBase_Context
 * Method:    close_
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cloud_unum_ukv_DataBase_00024Context_close_1(JNIEnv*, jobject);

/*
 * Class:     cloud_unum_ukv_DataBase_Context
 * Method:    transaction
 * Signature: ()Lcom/unum/ukv/DataBase/Transaction;
 */
JNIEXPORT jobject JNICALL Java_cloud_unum_ukv_DataBase_00024Context_transaction(JNIEnv*, jobject);

/*
 * Class:     cloud_unum_ukv_DataBase_Context
 * Method:    clear
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cloud_unum_ukv_DataBase_00024Context_clear__(JNIEnv*, jobject);

/*
 * Class:     cloud_unum_ukv_DataBase_Context
 * Method:    clear
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cloud_unum_ukv_DataBase_00024Context_clear__Ljava_lang_String_2(JNIEnv*, jobject, jstring);

/*
 * Class:     cloud_unum_ukv_DataBase_Context
 * Method:    remove
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cloud_unum_ukv_DataBase_00024Context_remove(JNIEnv*, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
