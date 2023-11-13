#!/bin/bash
gcc -shared -o libjackpot.so -fPIC libjackpot.c
export LD_PRELOAD=/$PWD/libjackpot.so:$LD_LIBRARY_PATH
