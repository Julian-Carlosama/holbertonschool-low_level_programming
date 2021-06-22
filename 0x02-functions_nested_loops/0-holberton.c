#include "holberton.h"
/**
 * main - Print HOLBERTON
 *
 * Return: Always 0
 */
int main(void)
{
	char text[9] = "Holberton";
	int i = 0;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
