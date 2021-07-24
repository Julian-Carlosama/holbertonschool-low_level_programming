#include "3-calc.h"

/**
 * op_add - operation add
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: result operation
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operation sub
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: result operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operation mult
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: result operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - operation divi
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: result operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - operation module
 *
 * @a: integer
 *
 * @b: integer
 *
 * Return: result operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
