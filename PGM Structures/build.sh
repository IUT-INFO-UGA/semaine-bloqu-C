#! /bin/sh
clear
gcc -Wall -Wextra -g -c traitement-image.c
gcc traitement-image.o -lpgmio
valgrind ./a.out
rm a.out traitement-image.o output.pgm