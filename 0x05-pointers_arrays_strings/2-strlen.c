#include "main.h"

/**
 * _strlen - return string size
 *
 * @s: string input
 *
 * Return: always success length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
