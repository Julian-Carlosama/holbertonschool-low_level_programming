#include "main.h"

/**
 * binary_to_uint - Convert string in binary to
 * integer.
 *
 * @b: Pointers to String to process.
 *
 * Return: Integer number or NULL if
 * is another thing.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convert = 0;
	int i;

	if (b == NULL)
		return (1);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		convert <<= 1;
		if (b[i] == 49)
			convert += 1;
	}
	return (convert);
}
