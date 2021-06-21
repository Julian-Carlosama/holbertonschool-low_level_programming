#include <stdio.h>
/**
 * main - execute the numbers whicth space
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 48; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
