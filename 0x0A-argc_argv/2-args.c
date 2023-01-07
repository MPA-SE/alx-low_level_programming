#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int w;

	for (w = 0; w < argc; w++)
	{
		printf("%s\n", argv[w]);
	}

	return (0);
}
