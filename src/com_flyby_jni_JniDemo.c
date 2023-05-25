#include <jni.h>
#include <stdio.h>
#include "com_flyby_jni_JniDemo.h"

// 生成.o文件
// gcc -c -fPIC -I/home/dgq/program/jdk-16.0.1/include -I/home/dgq/program/jdk-16.0.1/include/linux com_flyby_jni_JniDemo.c -o com_flyby_jni_JniDemo.o
// 生成.so文件
// gcc -shared com_flyby_jni_JniDemo.o -o JniDemoTest.so
JNIEXPORT void JNICALL Java_com_flyby_jni_JniDemo_testHello(JNIEnv *env, jobject thisObj){
    printf("Hello World native method!");
    return;
}