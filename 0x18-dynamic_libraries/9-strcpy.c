#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte
 * to the buffer pointed by dest
 * @src: string to copy from
 * @dest: string to copy to
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int q = 0;
	int d = 0;

	while (*(src + q) != '\0')
	{
		q++;
	}
	for (; d < q; d++)
	{
		dest[d] = src[d];
	}
	dest[q] = '\0';
	return (dest);
}
