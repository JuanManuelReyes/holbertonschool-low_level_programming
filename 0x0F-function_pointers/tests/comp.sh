#!/bin/bash
gcc 0-main.c ../0-print_name.c -o a
gcc 1-main.c ../1-array_iterator.c -o b
gcc 2-main.c ../2-int_index.c -o c
gcc 3-main.c ../3-op_functions.c ../3-get_op_func.c -o calc
gcc ../100-main_opcodes.c -o main
