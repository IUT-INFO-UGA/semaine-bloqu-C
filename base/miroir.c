/* à compléter: entêtes */
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_LEN 64

int main(void)
{
	char orig[BUFFER_LEN] = "bonjour";
	// = {0}; is the universal zero initializer, C99 Standard 6.7.8.21
	char mirror[BUFFER_LEN] = {0}; // fill buffer with 0 (a.k.a. '\0')

	int len = 1;
	while (orig[len] != '\0')
	{
		len++;
	}

	for (int i = 0; i <= len; i++)
	{
		mirror[i] = orig[len - i];
	}

	for (int i = 0; i <= len; i++)
	{
		printf("%c", mirror[i]);
	}

	return EXIT_SUCCESS;
}
