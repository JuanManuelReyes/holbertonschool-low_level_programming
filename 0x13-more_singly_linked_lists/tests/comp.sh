#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-print_listint.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-listint_len.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-add_nodeint.c ../0-print_listint.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c ../3-add_nodeint_end.c ../0-print_listint.c -o d
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../4-free_listint.c -o e
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c -o f
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c ../6-pop_listint.c -o g
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c ../7-get_nodeint.c -o h
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c ../3-add_nodeint_end.c ../5-free_listint2.c ../8-sum_listint.c -o i
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c ../9-insert_nodeint.c -o j
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 10-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c ../10-delete_nodeint.c -o k
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c ../3-add_nodeint_end.c ../0-print_listint.c ../5-free_listint2.c ../100-reverse_listint.c -o l

