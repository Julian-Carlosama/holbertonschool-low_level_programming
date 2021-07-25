#include "variadic_functions.h"


/**
 * cha - print va_arg c
 *
 * @c: va_list
 *
 * Return: no return
 */
void cha(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * pri - print va_arg i
 *
 * @i: list
 */
void pri(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * flo - print va_arg f
 *
 * @f: list
 */
void flo(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * str - print va_arg x
 *
 * @s: the list.
 */
void str(va_list s)
{
	char *max;

	max = va_arg(s, char *);
	if (max == NULL)
		max = "(nil)";
	printf("%s", max);
}

/**
 * print_all - prints anything.
 *
 * @format: amount arguments
 *
 * Return: no return
 */
void print_all(const char * const format, ...)
{
	int x = 0, z = 0;
	char *space = "";
	print_data print_any[] = {
	{"c", cha},
	{"i", pri},
	{"f", flo},
	{"s", str},
};
	va_list all;

	va_start(all, format);
while (format && format[x])
{
	while (print_any[z].spec)
	{
		if (format[x] == *(print_any[z].spec))
		{
			printf("%s", space);
			print_any[z].function(all);
			space = ", ";
			break;
		}
		z++;
	}
	z = 0;
	x++;
}
va_end(all);
printf("\n");
}
