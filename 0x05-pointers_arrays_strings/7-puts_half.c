#include "main.h"

/**
 * puts_half - prints half of s string
 * if the number of characters is odd,
 * print the last n characters of the string
 * @str: string
 */

void puts_half(char *str)
{
	int b, n, len;

	len = 0;

	for (b = 0; str[b] != '\0'; b++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (b = n; str[b] != '\0'; b++)
		_putchar(str[b]);
	_putchar('\n');
}

