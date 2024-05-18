#!/bin/sh
export KCFLAGS="-pipe -w"
export HOSTCFLAGS=$KCFLAGS HOSTCXXFLAGS=$KCFLAGS
exec make -j`nproc` CROSS_COMPILE=arm-linux-gnueabi- $@
