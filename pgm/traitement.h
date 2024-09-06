#ifndef TRAITEMENT_H_
#define TRAITEMENT_H_

#define DEBUG 0
#include <naivepgmio.h>
#include <stdio.h>

void pgm_solid(pgm_t_pixel *pixels, int width, int height, pgm_t_pixel color);
void pgm_negative(pgm_t_pixel *pixels, int width, int height);
void pgm_threshold(pgm_t_pixel *pixels, int width, int height, pgm_t_pixel threshold);
void pgm_gradient(unsigned char *pixels, size_t width, size_t height);
#endif // TRAITEMENT_H_