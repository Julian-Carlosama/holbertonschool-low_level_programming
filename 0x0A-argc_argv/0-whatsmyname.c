#include "holberton.h"
#include <stdio.h>

/**
 * main - Print its name
 *
 * @argc: Is the elemets numbers
 *
 * @argv: is the array that containering the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
