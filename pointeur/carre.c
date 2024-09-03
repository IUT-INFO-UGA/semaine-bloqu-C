#include <stdio.h>
#include <stdlib.h>

int carre_copie(int n)
{
	return n * n;
}

void carre_adresse(int *adr_n)
{
	*adr_n = (*adr_n) * (*adr_n);
}

int main(void)
{
	const int num = 8;
	int num2 = 8;
	printf("%d dans carré copie = %d\n", num, carre_copie(num));
	carre_adresse(&num2);
	printf("%d dans carré adresse = %d", num, num2);
}
