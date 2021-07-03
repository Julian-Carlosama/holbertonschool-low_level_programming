#include "holberton.h"
/**
 * reverse_array - Show a array in reverse
 *
 * @a: Is the array to process
 *
 * @n: Is the number to elements
 *
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			k = a[j];
			a[j] = a[j - 1];
			a[j - 1] = k;
		}
	}

}
