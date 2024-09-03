#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copier_chaine(const char *str)
{
	const int size = strlen(str);
	char *copy = malloc(size + 1);
	if (copy == NULL)
		return "\0";
	strcpy(copy, str);
	return copy;
}

int main(void)
{
	const char *from = "bonjour";
	char *to = copier_chaine(from);
	printf("from: %s\nto %s", from, to);
	free(to);
}
