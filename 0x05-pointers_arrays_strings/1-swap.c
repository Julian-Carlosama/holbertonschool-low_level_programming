#include "holberton.h"
/**
 * swap_int - swaps the values between a and b
 *
 * @a: Is the pointer of type int
 *
 * @b: Is other pointer fo type int
 *
 * Return: No return
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
