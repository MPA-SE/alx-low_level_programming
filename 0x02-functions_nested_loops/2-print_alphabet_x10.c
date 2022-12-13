#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet ten times
 */

void print_alphabet_x10(void)
{
	int dix;
	char alph;

	for (dix = 0; dix <= 9; dix++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
