package com.flyby.jni;

public class JniDemo {
    //定义一个方法，该方法在C中实现
    public native void testHello();

    public static void main(String[] args){
        //加载C文件
        System.loadLibrary("JniDemoTest");
        System.load("/home/dgq/git/TestJni/src/JniDemoTest.so");
        JniDemo jniDemo = new JniDemo();
        jniDemo.testHello();
    }
}
