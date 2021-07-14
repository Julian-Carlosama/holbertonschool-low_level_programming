#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: is the array elements
 *
 * @argv: Is the array that contain the elements
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", --argc);

	return (0);
}
