#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pgmio.h>

void pgm_show(char *filename)
{
	char *command = malloc(strlen(filename) + 6);

	strcpy(command, "eog ");
	strcat(command, filename);
	system(command);
	free(command);
}

// pgm_t_pixel *pgm_malloc(size_t width, size_t height)
// {
// 	return (pgm_t_pixel *)malloc(width * height * sizeof(pgm_t_pixel));
// }

// void pgm_solid(pgm_t_image img, pgm_t_pixel color)
// {
// 	for (int i = 0; i < img.width * img.height; i++)
// 	{
// 		img.pixels[i] = color;
// 	}
// }

void pgm_negative(pgm_t_image img)
{
	for (size_t i = 0; i < img.width * img.height; i++)
	{
		img.pixels[i] -= 255;
	}
}

// void pgm_threshold(pgm_t_image img, pgm_t_pixel threshold)
// {
// 	for (int i = 0; i < img.width * img.height; i++)
// 	{
// 		if (img.pixels[i] < threshold)
// 		{
// 			img.pixels[i] = 0;
// 		}
// 		else
// 		{
// 			img.pixels[i] = 255;
// 		}
// 	}
// }

// void pgm_gradient(unsigned char *pixels, size_t width, size_t height)
// {
// 	for (size_t y = 0; y < height; ++y)
// 	{
// 		for (size_t x = 0; x < width; ++x)
// 		{
// 			pgm_t_pixel gray_value = (pgm_t_pixel)(255 * x / (width - 1));
// 			pixels[y * width + x] = gray_value;
// 		}
// 	}
// }

int main()
{
	/* -------- copie -------- */
	// pgm_t_pixel *image = pgm_naiveread("guadalest.pgm", &width, &height);
	// pgm_naivewrite("output.pgm", image, width, height);

	/* -------- creation -------- */
	// pgm_t_pixel *image = pgm_malloc(width, height);
	// if (image == NULL)
	// {
	// 	printf("Échec de l'allocation mémoire\n");
	// 	return EXIT_FAILURE;
	// }
	// pgm_solid(image, width, height, 255);
	// pgm_naivewrite("output.pgm", image, width, height);

	/* -------- inversion -------- */
	pgm_t_image image = *pgm_read("guadalest.pgm");
	if (image.pixels == NULL)
	{
		printf("Failed to allocate memory for image pixels\n");
		return EXIT_FAILURE;
	}
	pgm_negative(image);
	pgm_write("output.pgm", &image);

	/* -------- dgradé -------- */
	// pgm_t_pixel *image = pgm_malloc(width, height);
	// if (image == NULL)
	// {
	// 	printf("Échec de l'allocation mémoire\n");
	// 	return EXIT_FAILURE;
	// }
	// pgm_gradient(image, width, height);
	// pgm_naivewrite("output.pgm", image, width, height);
	/* -------- main -------- */
	pgm_show("output.pgm");
	// free(image.pixels);

	return EXIT_SUCCESS;
}