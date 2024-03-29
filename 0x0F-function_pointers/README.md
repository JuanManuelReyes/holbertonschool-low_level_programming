
# 0x0F. C - Function pointers
## Resources

**Read or watch**:

-   [Function Pointer in C](https://intranet.hbtn.io/rltoken/LvjzIoEU3gQ_D5QCwoGtxA "Function Pointer in C")
-   [Pointers to functions](https://intranet.hbtn.io/rltoken/3y_80bkcxiZ5Pc5Zk6NCvQ "Pointers to functions")
-   [Function Pointers in C / C++](https://intranet.hbtn.io/rltoken/i-zereq8foaoJZfG383Rvg "Function Pointers in C / C++")
-   [why pointers to functions?](https://intranet.hbtn.io/rltoken/jbk8p-_m0dJq2KC7tHrJbg "why pointers to functions?")
-   [Everything you need to know about pointers in C](https://intranet.hbtn.io/rltoken/HuMpTjvVc_PxonkOuzQEbg "Everything you need to know about pointers in C")

## Learning Objectives

At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/_YIO2e-atMICPHZqBvulIA "explain to anyone"),  **without the help of Google**:

### General

-   What are function pointers and how to use them
-   What does a function pointer exactly hold
-   Where does a function pointer point to in the virtual memory

## Requirements

### General

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using  `gcc`, using the options  `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   The only C standard library functions allowed are  `malloc`,  `free`  and  `exit`. Any use of functions like  `printf`,  `puts`,  `calloc`,  `realloc`  etc… is forbidden
-   You are allowed to use  [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don’t have to push  `_putchar.c`, we will use our file. If you do it won’t be taken into account
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function  `_putchar`  should be included in your header file called  `function_pointers.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
