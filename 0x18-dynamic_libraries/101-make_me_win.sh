#!/bin/bash
wget -P /tmp/ https://github.com/JuanManuelReyes/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/lib.so?raw=true
export LD_PRELOAD=/tmp/lib.so
