#!/bin/bash
gcc  0-main.c -o a
gcc 1-main.c ../1-init_dog.c -o b
gcc 2-main.c ../2-print_dog.c -o c
gcc 3-main.c -o d
gcc 4-main.c ../4-new_dog.c -o e
gcc 5-main.c ../5-free_dog.c ../4-new_dog.c -o f
