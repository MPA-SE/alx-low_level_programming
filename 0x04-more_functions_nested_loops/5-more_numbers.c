#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int a, p;

	for (a = 0; a < 10; a++)
	{
		for (p = 0; p < 15; p++)
		{
			_putchar(p + '0');
		}
		_putchar('\n');
	}
}
