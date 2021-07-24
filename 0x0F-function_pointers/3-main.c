#include "3-calc.h"

/**
 * main - show the result to operation
 *
 * @argc: Amount of Elements
 *
 * @argv: Is the array
 *
 * Return: result of aritmetic operation
 */

int main(int argc, char **argv)
{
	/*numbers passed by console*/
	int a, b, result;
	char *operator = NULL;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(operator);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	result = f(a, b);
	printf("%d\n", result);
	return (0);

}
