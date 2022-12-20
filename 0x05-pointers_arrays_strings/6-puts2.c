#include "main.h"

/**
 * puts2 - Prints one char output of two of a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
	int a = 0;

	while (a >= 0)
	{
		if (str[a] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	}
}
