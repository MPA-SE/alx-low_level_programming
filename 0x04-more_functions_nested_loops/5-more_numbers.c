#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times
 */

void more_numbers(void)
{
	int a, p;

	for (a = 0; a < 10; a++)
	{
		for (p = 0; p < 15; p++)
		{
			if (p >= 10)
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
