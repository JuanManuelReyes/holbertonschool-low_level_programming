#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-binary_to_uint.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-print_binary.c ../_putchar.c -o b
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-get_bit.c -o c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c ../3-set_bit.c -o d
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c ../4-clear_bit.c -o e
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c ../5-flip_bits.c -o f
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c ../100-get_endianness.c -o h

