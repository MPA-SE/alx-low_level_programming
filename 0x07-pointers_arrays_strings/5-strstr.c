#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to the beginning
 * of a located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int u;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		u = 0;

		if (haystack[u] == needle[u])
		{
			do {
				if (needle[u + 1] == '\0')
				return (haystack);

			u++;
			} while (haystack[u] == needle[u]);
		}
		haystack++;
	}
	return ('\0');
}
