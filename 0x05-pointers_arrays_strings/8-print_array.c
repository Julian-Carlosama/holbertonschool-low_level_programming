#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Show the elements
 *
 * @a: Is the array
 *
 * @n: Is the number of elements
 *
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if ((n + 1) != i && i != 0)
			printf(", ");
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
