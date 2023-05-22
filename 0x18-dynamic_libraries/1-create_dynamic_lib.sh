#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -shared -o libdynamic.so *.o
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len

sudo cp libdynamic.so /usr/lib
