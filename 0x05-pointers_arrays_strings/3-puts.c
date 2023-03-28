#include "main.h"

/**
 * _puts - print string
 * @str: string input
 * Return: always success 0
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
