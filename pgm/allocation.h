#ifndef ALLOCATION_H_
#define ALLOCATION_H_

#include <naivepgmio.h>

pgm_t_pixel *pgm_malloc(size_t width, size_t height);
void pgm_free(pgm_t_pixel *image);

#endif // ALLOCATION_H_