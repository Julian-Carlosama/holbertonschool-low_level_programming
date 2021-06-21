#include <stdio.h>
/**
 * main - execute the alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i > 26)
	{
		putchar(alpha[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
