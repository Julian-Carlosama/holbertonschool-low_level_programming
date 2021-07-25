#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - struct
 * @spec: the specification.
 * @func: the function.
 */
typedef struct print_any
{
	char *spec;
	void (*function)(va_list);
} print_data;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif
