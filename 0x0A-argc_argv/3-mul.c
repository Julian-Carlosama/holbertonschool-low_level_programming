#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: Numbers of arguments
 *
 * @argv: Array to process
 *
 * Return: value
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d \n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
