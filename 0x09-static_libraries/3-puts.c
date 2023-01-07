#include "main.h"
#include <stdio.h>
/**
* _puts - prints a string, followed by a new line
* to stdout
* @str: pointer
* Return: Always 0 (Success)
**/
void _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p += 1;
	}
	_putchar('\n');
}

