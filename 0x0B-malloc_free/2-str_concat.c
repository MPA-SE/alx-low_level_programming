#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *con;
	int h, la;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	h = la = 0;

	while (s1[h] != '\0')
		h++;

	while (s2[la] != '\0')
		la++;
	con = malloc(sizeof(char) * (h + la + 1));
	if (con == NULL)
		return (NULL);
	h = la = 0;
	while (s1[h] != '\0')
	{
		con[h] = s1[h];
		h++;
	}
	while (s2[la] != '\0')
	{
		con[h] = s1[h];
		h++, la++;
	}
	con[h] = '\0';
	return (con);
}
