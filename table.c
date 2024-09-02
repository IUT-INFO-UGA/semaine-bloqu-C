#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int table;
	printf("vous voulez la table de combien ? ");
	scanf("%d", &table);
	for (int i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", table, i, (table * i));
	}
	return EXIT_SUCCESS;
}