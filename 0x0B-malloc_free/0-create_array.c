#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array initialised with a char
 * @size: first input
 * @c: second input
 * Return: NULL if size is 0
 * returns a pointer or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int z;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (z = 0; z < size; z++)
		str[z] = c;

	return (str);
}
