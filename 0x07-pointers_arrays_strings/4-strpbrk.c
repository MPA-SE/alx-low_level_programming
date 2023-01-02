#include "main.h"

/**
 * _strpbrk - searches a string
 * for a set of bytes
 * @s: first string
 * @accept: second string
 * Return: pointer to the byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
		{
			if (*s == accept[w])
				return (s);
		}

		s++;
	}

	return ('\0');
}

