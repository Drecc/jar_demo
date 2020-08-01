package org.test.demo;

// import org.chromium.base.annotations.CalledByNative;
import org.chromium.base.annotations.JNINamespace;
import org.chromium.base.annotations.NativeMethods;

@JNINamespace("demo")
public class Test {

    private String msg;

    private long mNativeTest;

    public Test() {
        mNativeTest = TestJni.get().CreateTest();
    }

    public String GetMsg() {
        return TestJni.get().GetTestMsg(mNativeTest);
    }

    public void CloseTest() {
        TestJni.get().CloseTest(mNativeTest);
    }

    @NativeMethods
    interface Natives {
        String GetTestMsg(long testPtr);
        void CloseTest(long testPtr);
        long CreateTest();
    }
}