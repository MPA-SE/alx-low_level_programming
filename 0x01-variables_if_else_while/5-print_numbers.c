#include <stdio.h>

/**
 * main - Print digits
 * Return: Always 0
 */

int main(void)
{
	int d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	putchar('\n');
	return (0);
}