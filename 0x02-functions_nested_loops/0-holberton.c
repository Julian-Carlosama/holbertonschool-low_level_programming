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

	while (i <= 9)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
