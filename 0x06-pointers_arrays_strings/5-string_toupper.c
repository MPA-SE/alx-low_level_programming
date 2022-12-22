#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string, to uppercase
 * @h: a pointer
 * Return: 0
 */

char *string_toupper(char *h)
{
	int d;

	d = 0;
	while (h[d] != '\0')
	{
		if (h[d] >= 'a' && h[d] <= 'z')
			h[d] = h[d] - 32;
		d++;
	}

	return (h);
}
