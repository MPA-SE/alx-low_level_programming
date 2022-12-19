#include "main.h"

/**
 * reset_to_98 - take a pointer to an int
 * and update the value to 98
 * @n: input
 * Return: 0
 */

void reset_to_98(int *n)
{
	int i = 5;

	n = &i;
	*n = 98;
}
