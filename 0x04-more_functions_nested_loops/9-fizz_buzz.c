#include <stdio.h>

/**
 * main - prints 1 to 100, but Fizz for multiples of 3
 * Buzz for multiples of 5
 * and Fizzbuzz multiples of 3 and 5
 * Return: 0
 */

int main(void)
{
	int p;

	p = 1;
	printf("%d", p);
	for (p = 2; p <= 100; p++)
	{
		if ((p % 3 == 0) && (p % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (p % 3 == 0)
		{
			printf("Fizz");
		}
		else if (p % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", p);
		}
	}
	printf("\n");
	return (0);
}
