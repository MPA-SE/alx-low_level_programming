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
	for (u = 0; u <= n; u++)
		_putchar('\n');
	_putchar('\n');
}
