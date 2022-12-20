#include "main.h"

/**
 * _strlen - Finds the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @str.
 */
int _strlen(char *s)
{
	int p = 0;
	/*increament up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
