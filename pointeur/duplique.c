#include <stdio.h>
#include <stdlib.h>

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

int my_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

char *copier_chaine(char *str)
{
	char *copy = malloc(sizeof(char) * my_strlen(str) + 1);
	if (copy == NULL)
		return "\0";
	my_strcpy(copy, str);
	return copy;
}

int main(void)
{
	char *from = "bonjour";
	char *to = copier_chaine(from);
	printf("from: %s\nto %s", from, to);
	free(to);
}
