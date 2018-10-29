LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := getSignMD
LOCAL_SRC_FILES := com_dinpay_keyso_DinpayUtils.c
include $(BUILD_SHARED_LIBRARY)