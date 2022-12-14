#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @p : the number
 * Return: The value of the last digit
 */

int print_last_digit(int p)
{
	int last_d = p % 10;

	if (last_d < 0)
		last_d *= -1;

	_putchar(last_d + '0');

	return (0);
}
