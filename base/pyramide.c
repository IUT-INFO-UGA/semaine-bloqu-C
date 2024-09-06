#include <stdio.h>
#include <stdlib.h>
void repeat(int repeat, char ch)
{
	for (int i = 0; i < repeat; i++)
	{
		printf("%c", ch);
	}
}
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		printf("You must use 2 parameters");
		return EXIT_FAILURE;
	}

	int height = atoi(argv[1]);

	for (int i = 1; i <= height; i++)
	{
		repeat(height - i, ' ');

		repeat(2 * i - 1, argv[2][0]);

		printf("\n");
	}

	return EXIT_SUCCESS;
}