#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return: always success 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
