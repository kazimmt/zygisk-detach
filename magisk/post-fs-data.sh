#!/system/bin/sh

if magisk --denylist status; then
	magisk --denylist rm com.android.vending
fi
