#!/bin/bash
gcc 0-main.c ../0-memset.c -o 0-memset
gcc 1-main.c ../1-memcpy.c -o 1-memcpy
gcc 2-main.c ../2-strchr.c -o 2-strchr
gcc 3-main.c ../3-strspn.c -o 3-strspn
gcc 4-main.c ../4-strpbrk.c -o 4-strpbrk
gcc 5-main.c ../5-strstr.c -o 5-strstr
gcc ../_putchar.c 7-main.c ../7-print_chessboard.c -o 7-print_chessboard
gcc 8-main.c ../8-print_diagsums.c -o 8-print_diagsums
gcc 100-main.c ../100-set_string.c -o 100-set_string

