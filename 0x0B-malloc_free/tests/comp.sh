!#/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c ../0-create_array.c -o a
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c ../1-strdup.c -o s
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c ../2-str_concat.c -o 2-str_concat
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c ../3-alloc_grid.c -o 3-alloc_grid
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c ../3-alloc_grid.c 4-free_grid.c -o 4-free_grid
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c ../100-argstostr.c -o args
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c ../101-strtow.c -o strtow
