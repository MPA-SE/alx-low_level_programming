#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: name of array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < (n - 1); e++)
	{
		printf("%d, ", a[e]);
	}
	if (e == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}

