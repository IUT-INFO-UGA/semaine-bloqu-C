#! /bin/sh
clear
gcc -Wall -Wextra -g -c traitement-image.c traitement.c allocation.c
gcc traitement-image.o traitement.o allocation.o -lnaivepgmio
rm traitement-image.o traitement.o allocation.o
./a.out
rm a.out output.pgm