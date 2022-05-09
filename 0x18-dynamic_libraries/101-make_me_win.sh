#!/bin/bash
wget -P /tmp/ https://raw.github.com/JuanManuelReyes/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/lib.so
export LD_PRELOAD="$PWD/../lib.so"
