#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * which contains a copy of string given as parameter
 * @str: input
 * Return: NULL if str is NULL
 * return a pointer, on success
 * return NULL if insufficient memory is available
 */

char *_strdup(char *str)
{
	char *pri;

	int j, s = 0;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;

	pri = malloc(sizeof(char) * (j + 1));

	if (pri == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		pri[s] = str[s];
	return (pri);
}
