#pragma once
#include <android/log.h>
#include <jni.h>
#include <cstdio>
#include <cstdlib>

#define LOGD(...) ((void)__android_log_print(ANDROID_LOG_DEBUG, "Onboarding", __VA_ARGS__))
