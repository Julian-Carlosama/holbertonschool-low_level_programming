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
			putchat(' ');
		}
		putchar('\n');
		return (0);
}
