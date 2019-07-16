#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator:char
 * @n:int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list valist;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(valist, n);

	for (i = 0; i < (n - 1); i++)
	{

	printf("%d", va_arg(valist, int));

	printf("%s", separator);

	}
	printf("%d", va_arg(valist, int));
	printf("\n");

}
