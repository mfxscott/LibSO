
#include "com_dinpay_keyso_DinpayUtils.h"

JNIEXPORT jstring JNICALL Java_com_dinpay_keyso_DinpayUtils_getSignMD
        (JNIEnv *env, jstring instringB)
{
    jstring str = (*env)->NewStringUTF(env, "HelloWorld from JNI !");
    return str;
}
