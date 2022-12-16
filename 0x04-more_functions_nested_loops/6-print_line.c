#include "main.h"

/**
 * print_line - draws straight line
 * @n: number of times to print
 */

void print_line(int n)
{
	int u;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (u = 0; u < n; u++)
		_putchar(95);
	_putchar('\n');
	}
}
