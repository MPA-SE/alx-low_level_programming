#include "main.h"
#include <string.h>

/**
 * memset - fills memory with
 * with a constant byte
 * @s - pointer
 * @b - constant byte
 * @n - unsigned int
 * Return: the pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; n > 0; t++, n--)
	{
		s[t] = b;
	}

	return (s);
}
