#include "main.h"

/**
 * _strspn - gets the length
 * of a prefix substring
 * @s: initial segment
 * @accept: pointer
 * Return: number of bytes
 * in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int g = 0;
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				g++;
				break;
			}

			else if (accept[z + 1] == '\0')
				return (g);
		}

		s++;
	}

	return (g);
}
