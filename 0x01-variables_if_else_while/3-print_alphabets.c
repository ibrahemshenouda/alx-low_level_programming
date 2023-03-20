#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 97;

	while (x < 123)
	{
		putchar(x++);
	}
	int y = 65;

	while (y < 91)
	{
		putchar(y++);
	}
	printf("\n");
	return (0);
}
