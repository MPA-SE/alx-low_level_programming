#include "main.h"

/**
 * puts2 - prints every ther character of string
 * starting with the first character
 * @str: the string
 */

void puts2(char *str)
{
	int len = 0;
	int k = 0;
	char *g = str;
	int p;

	while (*g != '\0')
	{
		g++;
		len++;
	}
	k = len - 1;
	for (p = 0; p <= k; p++)
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}
	}
	_putchar('\n');
}
