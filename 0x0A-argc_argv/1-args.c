#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: is the array elements
 *
 * @argv: Is the array witch the argumments
 *
 * Return: Always 0
 */

int main(int argc, char** argv)
{
	(void)argc;
	(void)argv;
	printf("%d \n", argc - 1);
	return (0);
}
