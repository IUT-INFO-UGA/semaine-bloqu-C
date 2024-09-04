#include <stdio.h>
#include <stdlib.h>
void repeat(int repeat, char ch)
{
	for (int i = 0; i < repeat; i++)
	{
		printf("%c", ch);
	}
}
int main(void)
{
	int height = 0;
	printf("hauteur ? ");
	scanf("%d", &height);

	for (int i = 1; i <= height; i++)
	{
		repeat(height - i, ' ');
		repeat(2 * i - 1, '*');
		printf("\n");
	}

	return EXIT_SUCCESS;
}