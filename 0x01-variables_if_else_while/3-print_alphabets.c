#include <stdio.h>
/**
 * main - Show all alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char alpa[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alpa[i]);
		i++;
	}
	putchar('\n');
}
