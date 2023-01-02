#include "main.h"

/**
 * _strchr - locates a character
 * in a string
 * @s: the string
 * @c: the character
 * Return: a pointer
 * to the first occurrence
 * of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int p;

	for (p = 0; s[p] >= '\0'; p++)
	{
		if (s[p] == c)
			return (s + p);
	}

	return ('\0');
}
