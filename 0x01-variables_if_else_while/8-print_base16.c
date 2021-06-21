#include <stdio.h>
/**
 * main - Print all numbers of base 16
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		if (i > 57 && i < 97)
		{
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
