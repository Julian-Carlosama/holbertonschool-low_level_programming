#include "holberton.h"
/**
 * rev_string - Show string reverse
 *
 * @s: String to process
 *
 * Return: No return
 */
void rev_string(char *s)
{
	int i, j, k;

	char *ns, t;

	for (i = 0; s[i] != '\0'; i++)

	ns = s;

	for (j = 0; j < (i - 1); j++)
	{
		for (k = j + 1; k > 0; k--)
		{
			t = ns[k];
			ns[k] = ns[k - 1];
			ns[k - 1] = t;
		}
	}
}
