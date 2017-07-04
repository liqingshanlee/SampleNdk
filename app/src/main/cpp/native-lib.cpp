
#include <jni.h>
#include <string>

JNIEXPORT jstring JNICALL
Java_lqs_appndk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_lqs_appndk_MainActivity_getSample(JNIEnv *env, jobject instance) {
    std::string hell = "Hello sample";
    return env->NewStringUTF(hell.c_str());
}