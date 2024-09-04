#! /bin/sh
clear
gcc -Wall -Wextra -g -c traitement-image.c
gcc traitement-image.o -lnaivepgmio
rm traitement-image.o
./a.out