#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int len = 0;
	int y;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (y = len; y > 0; y--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
