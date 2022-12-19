#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 */

void rev_string(char *s)
{
	char r = s[0];
	int count = 0;
	int f;

	while (s[count] != '\0')
		count++;
	for (f = 0; f < count; f++)
	{
		count--;
		r = s[f];
		s[f] = s[count];
		s[count] = r;
	}
}

