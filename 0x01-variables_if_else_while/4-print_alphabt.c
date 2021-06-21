#include <stdio.h>
/**
 * main - print all the alphabet exect q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}
