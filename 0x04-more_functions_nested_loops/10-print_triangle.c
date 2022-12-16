#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return : no return
 */

void print_triangle(int size)
{
	int a;
	int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size - a); b++)
		{
			_putchar(' ');
		}
		for (b--; b < size; b++)
			_putchar(35);
		if (a < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
