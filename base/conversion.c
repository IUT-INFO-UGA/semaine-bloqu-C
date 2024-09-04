#include <stdio.h>
#include <stdlib.h>

float celsius(float fahrenheit);

int main(void)
{
	printf("-----------------------\n");
	printf("Fahrenheit	Celsius\n");
	printf("-----------------------\n");
	for (int i = 0; i <= 200; i += 20)
	{
		printf("\t%d\t%2.1f\n", i, celsius(i));
	}
}

float celsius(float fahrenheit)
{
	return 5.0 / 9.0 * (fahrenheit - 32.0);
}