#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char str[] =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, sizeof(str) - 1);
	return (1);
}
