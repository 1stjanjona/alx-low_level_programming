#!/bin/bash
wget -P /tmp https://github.com/1stjanjona/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libjackpot.so
export LD_PRELOAD=/tmp/libjackpot.so
