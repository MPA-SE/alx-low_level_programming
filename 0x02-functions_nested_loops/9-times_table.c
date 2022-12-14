#include "main.h"

/**
 * times_table - Prints the nine times table
 */

void times_table(void)
{
	int x, mul, pro;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar('+');
			_putchar(' ');

			pro = x * mul;

			if (pro <= 9)
				_putchar(' ');
			else
				_putchar(pro / 10);

			_putchar(pro % 10);
		}
		_putchar('\n');
	}
}
