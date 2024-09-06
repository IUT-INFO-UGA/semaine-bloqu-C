#include "traitement.h"

#define SEUIL1_PIXEL(pixelColor, threshold) ((pixelColor) < (threshold) ? (0) : (255))
#if DEBUG
#define AFFICHER_FUNCTION() (printf(__func__))
#else
#define AFFICHER_FUNCTION()
#endif

void pgm_solid(pgm_t_pixel *pixels, int width, int height, pgm_t_pixel color)
{
	for (int i = 0; i < width * height; i++)
	{
		pixels[i] = color;
	}
}

void pgm_negative(pgm_t_pixel *pixels, int width, int height)
{
	for (int i = 0; i < width * height; i++)
	{
		pixels[i] = 255 - pixels[i];
	}
}

void pgm_threshold(pgm_t_pixel *pixels, int width, int height, pgm_t_pixel threshold)
{
	for (int i = 0; i < width * height; i++)
	{
		pixels[i] = SEUIL1_PIXEL(pixels[i], threshold);
	}
	AFFICHER_FUNCTION();
}

void pgm_gradient(unsigned char *pixels, size_t width, size_t height)
{
	for (size_t y = 0; y < height; ++y)
	{
		for (size_t x = 0; x < width; ++x)
		{
			pgm_t_pixel gray_value = (pgm_t_pixel)(255 * x / (width - 1));
			pixels[y * width + x] = gray_value;
		}
	}
}