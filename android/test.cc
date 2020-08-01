#include "my_jar_demo/android/test.h"

#include "base/android/jni_string.h"
#include "base/android/jni_int_wrapper.h"
#include "my_jar_demo/android/jni_headers/Test_jni.h"

namespace demo {

static base::android::ScopedJavaLocalRef<jstring> JNI_Test_GetTestMsg(JNIEnv* env, jlong
    testPtr) {
    Test* test = reinterpret_cast<Test*>(testPtr);
    LOG(WARNING) << "=========JNI_Test_GetTestMsg";
    return base::android::ConvertUTF8ToJavaString(env, test->GetMsg());
}

static void JNI_Test_CloseTest(JNIEnv* env, jlong testPtr) {
    Test* test = reinterpret_cast<Test*>(testPtr);
    LOG(WARNING) << "=========JNI_Test_CloseTest";

    delete test;
}

static jlong JNI_Test_CreateTest(JNIEnv* env) {
    Test* test = new Test();
    test->SetMsg("demo test");
    LOG(WARNING) << "=========JNI_Test_CreateTest";
    return reinterpret_cast<intptr_t>(test);
}



}   //namespace demo