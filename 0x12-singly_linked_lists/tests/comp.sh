#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-print_list.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-list_len.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-add_node.c ../0-print_list.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c ../3-add_node_end.c ../0-print_list.c -o d
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c ../4-free_list.c ../3-add_node_end.c ../0-print_list.c -o e
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c ../100-first.c -o first
