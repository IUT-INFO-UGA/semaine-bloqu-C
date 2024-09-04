#include <stdio.h>
#include <stdlib.h>

void permuter(int *adr_a, int *adr_b)
{
	const int temp = *adr_a;
	*adr_a = *adr_b;
	*adr_b = temp;
}

int main(void)
{
	int val1 = 1,
		val2 = 2;
	printf("val1: %d, val2: %d\n", val1, val2);
	permuter(&val1, &val2);
	printf("val1: %d, val2: %d\n", val1, val2);
}
