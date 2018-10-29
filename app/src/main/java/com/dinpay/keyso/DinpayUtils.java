package com.dinpay.keyso;

/**
 * Created by NN on 2018/10/29.
 */

public class DinpayUtils {
    static {
        System.loadLibrary("dinpayso");
    }

    public native static String getSignMD();
}
