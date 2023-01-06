#include "main.h"

/**
 * _memcpy - copies a memory area
 * @dest: second memory area
 * @src: first memory area
 * @n: bytes
 * Return: a pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		*(dest + y) = *(src + y);
	return (dest);
}
