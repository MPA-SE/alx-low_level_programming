#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal line
 * @n: number of times to print diagonals
 * Return: no return
 */
void print_diagonal(int n)
{
	int u, i;

	for (u = 0; u < n; u++)
	{
		for (i = 0; i < u; i++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (u < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
