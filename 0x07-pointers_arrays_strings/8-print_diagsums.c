#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: the matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int e, sumA = 0, sumB = 0;

	for (e = 0; e < size; e++)
	{
		sumA += a[e];
		a += size;
	}

	a -= size;

	for (e = 0; e < size; e++)
	{
		sumB += a[e];
		a -= size;
	}

	printf("%d, %d\n", sumA, sumB);
}
