#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("trois arg attendu, %d recus", argc);
		return EXIT_FAILURE;
	}

	const int arg1 = atoi(argv[1]);
	const char operator= argv[2][0];
	const int arg2 = atoi(argv[3]);

	printf("%d %c %d = ", arg1, operator, arg2);
	switch (operator)
	{
	case '+':
		printf("%d", arg1 + arg2);
		break;
	case '-':
		printf("%d", arg1 - arg2);
		break;
	case '*':
		printf("%d", arg1 * arg2);
		break;
	case '/':
		if (arg2 != 0)
			printf("%d", arg1 / arg2);
		else
			printf("Error: Division by zero");
		break;
	default:
		printf("Invalid operator");
		break;
	}
	return EXIT_SUCCESS;
}