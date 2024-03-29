#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator string
 * @n: number of integers passed to function
 * Return: return 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
			printf("%i%s", va_arg(ap, int), separator);
		else
			printf("%i", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
