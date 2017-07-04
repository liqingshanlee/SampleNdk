#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_lqs_appndk_MainActivity_getStrFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

