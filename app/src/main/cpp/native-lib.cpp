#include <jni.h>
#include <string>
#include <opencv2/opencv.hpp>

using namespace cv;
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_caucse_alonehealth_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_caucse_alonehealth_MainActivity_ConvertRGBtoGray(JNIEnv *env, jobject instance,
                                                                  jlong matAddrInput,
                                                                  jlong matAddrResult) {

    // TODO
// 입력 RGBA 이미지를 GRAY 이미지로 변환
    Mat &matInput = *(Mat *)matAddrInput;
    Mat &matResult = *(Mat *)matAddrResult;

    cvtColor(matInput, matResult, CV_RGBA2GRAY);
}

extern "C"
JNIEXPORT void JNICALL
Java_com_example_caucse_alonehealth_OpenCVTest_ConvertRGBtoGray(JNIEnv *env, jobject instance,
                                                                jlong matAddrInput,
                                                                jlong matAddrResult) {

    // TODO

}