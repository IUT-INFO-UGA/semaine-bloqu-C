#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

void my_strcpy(char *out, char *in)
{
	int i = 0;
	while (in[i] != '\0')
	{
		out[i] = in[i];
		i++;
	}

	out[i] = '\0';
}

char *copier_chaine(char *str)
{
	char *copy = malloc(sizeof(char) * my_strlen(str) + 1);
	if (copy == NULL)
		return NULL;
	my_strcpy(copy, str);
	return copy;
}

int main(void)
{
	char *from = "bonjour";
	char *to = copier_chaine(from);
	printf("from: %s\nto %s", from, to);
	if (to != NULL)
		free(to);
}
