#include "main.h"

/**
 * leet - encode into 1337
 * @m: input value
 * Return: m value
 */

char *leet(char *m)
{
	int a, b;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (a = 0; m[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (m[a] == str1[b])
			{
				m[a] = str2[b];
			}
		}
	}
	return (m);
}
