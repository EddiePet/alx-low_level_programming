#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 * Return: no return.
 */
void puts_half(char *str)
{
	int a = 0, i;

	while (a >= 0)
	{
		if (str[a] == '\0')
			break;
		a++;
	}
	if (a % 2 == 1)
		i = a / 2;

	for (i++; i < a; i++)
		_putchar(str[i]);
	_putchar('\n');
}
