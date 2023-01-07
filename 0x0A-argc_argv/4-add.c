#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive integers and prints result
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no number is passed
 * 1 if one number contains symbols not digits
 */

int main(int argc, char *argv[])
{
	int result, h;
	char *q;
	int N;

	result = 0;
	if (argc > 1)
	{
		for (h = 1; argv[h]; h++)
		{
			N = strtol(argv[h], &q, 10);
			if (!*q)
				result += N;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", result);
	return (0);
}
