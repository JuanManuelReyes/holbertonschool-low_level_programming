#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/0-main.c 0-hash_table_create.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/1-main.c 1-djb2.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/2-main.c 1-djb2.c 2-key_index.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 tests/5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f
gcc -Wall -pedantic -Werror -Wextra tests/6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g

