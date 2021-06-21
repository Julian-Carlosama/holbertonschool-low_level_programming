#include <stdio.h>
/**
 * main - print all the alphabet exect q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i< 52; i++)
	{
		if ( i != 4 && i != 16)
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}
