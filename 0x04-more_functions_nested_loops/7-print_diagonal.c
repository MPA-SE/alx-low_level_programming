#include "main.h"

/**
 * print_diagonal - printing line
 * @n: integer
 */

void print_diagonal(int n)
{
	int u, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (u = 0; u < n; u++)
		{
			for (i = 0; i <= u; u++)
				_putchar(' ');
			_putchar(92);
		_putchar('\n');
		}

		_putchar('\n');
	}
}
