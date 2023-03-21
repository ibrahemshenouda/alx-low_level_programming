#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 122;

	while (x > 96)
	{
		putchar(x--);
	}
	putchar(10);
	return (0);
}
