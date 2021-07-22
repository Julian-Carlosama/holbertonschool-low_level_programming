#include "function_pointers.h"

/**
 * print_name - Print a name
 *
 * @name: variable name to print
 *
 * @f: pointer to function
 *
 * Return: no return
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
