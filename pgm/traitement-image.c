#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <naivepgmio.h>
#include "traitement.h"
#include "allocation.h"
void pgm_show(char *filename)
{
	char *command = malloc(strlen(filename) + 6);

	strcpy(command, "eog ");
	strcat(command, filename);
	system(command);
	free(command);
}

int main()
{
	size_t width = 400;
	size_t height = 534;

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
	// pgm_t_pixel *image = pgm_naiveread("guadalest.pgm", &width, &height);
	// pgm_negative(image, width, height);
	// pgm_naivewrite("output.pgm", image, width, height);

	/* -------- seuil -------- */
	pgm_t_pixel *image = pgm_naiveread("guadalest.pgm", &width, &height);
	pgm_threshold(image, 400, 534, 125);
	pgm_naivewrite("output.pgm", image, width, height);

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
	pgm_free(image);

	return EXIT_SUCCESS;
}