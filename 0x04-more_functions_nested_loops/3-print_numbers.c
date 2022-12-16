#include "main.h"

/**
 * print_numbers - print nunmbers 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int p;

	for (p = 0; p < 10; p++)
		_putchar(p + '0');
	_putchar('\n');
}
