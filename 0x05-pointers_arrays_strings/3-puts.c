#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 */

void _puts(char *str)
{
	char x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x+= 1;
	}
	_putchar('\n');
}
