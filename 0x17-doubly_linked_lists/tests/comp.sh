#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-print_dlistint.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-dlistint_len.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-add_dnodeint.c ../0-print_dlistint.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c ../3-add_dnodeint_end.c ../0-print_dlistint.c -o d
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c ../3-add_dnodeint_end.c ../0-print_dlistint.c ../4-free_dlistint.c -o e
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c ../3-add_dnodeint_end.c ../0-print_dlistint.c ../4-free_dlistint.c ../5-get_dnodeint.c -o h
gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 ../3-add_dnodeint_end.c ../4-free_dlistint.c ../6-sum_dlistint.c -o i
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c ../2-add_dnodeint.c ../3-add_dnodeint_end.c ../0-print_dlistint.c ../4-free_dlistint.c ../7-insert_dnodeint.c -o j
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c ../3-add_dnodeint_end.c ../0-print_dlistint.c ../4-free_dlistint.c ../8-delete_dnodeint.c -o k
