#include <stdio.h>

/**
 * main - Print base sixteen
 * Return: Always 0
 */

int main(void)
{
	int b;
	char l;

	for (b = 0; b < 10; b++)
		putchar((b % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
