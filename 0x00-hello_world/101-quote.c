#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	const char str[] =
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	size_t str_len = strlen(str);

	fwrite(str, sizeof(char), str_len, stderr);
	return (1);
}
