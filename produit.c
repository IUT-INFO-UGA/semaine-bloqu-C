#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int first, second;
	printf("programme qui multiplie 2 nombres\n");
	printf("saisir un premier nombre : ");
	scanf("%d", &first);
	printf("saisir un deuxieme nombre : ");
	scanf("%d", &second);
	printf("%d x %d = %d\n", first, second, (first * second));
	return EXIT_SUCCESS;
}