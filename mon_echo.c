/* à compléter: entêtes */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	for (int i = 1; i < argc; i++)
	{
		printf("%s", argv[i]);
		if (argc != i + 1)
		{
			printf(" ");
		}
	}

	return EXIT_SUCCESS;
}
