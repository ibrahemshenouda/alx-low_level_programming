#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex[] = "0123456789abcdef";
	int x = 0;

	while (x < 16)
	{
		putchar(hex[x++]);
	}
	putchar(10);
	return (0);
}
