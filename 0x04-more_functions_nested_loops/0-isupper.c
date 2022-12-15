#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks for uppercase character
 * Return: 1 if c is uppercase, returns 0 otherwise
 * @c: character to check
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
