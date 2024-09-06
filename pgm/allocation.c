#include "allocation.h"

pgm_t_pixel *pgm_malloc(size_t width, size_t height)
{
	return (pgm_t_pixel *)malloc(width * height * sizeof(pgm_t_pixel));
}

void pgm_free(pgm_t_pixel *image)
{
	free(image);
}