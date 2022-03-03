#!/bin/bash
gcc 0-main.c ../0-malloc_checked.c -o a
gcc 1-main.c ../1-string_nconcat.c -o 1-string_nconcat
gcc 2-main.c ../2-calloc.c -o 2-calloc
gcc 3-main.c ../3-array_range.c -o 3-array_range
gcc 100-main.c ../100-realloc.c -o 100-realloc
