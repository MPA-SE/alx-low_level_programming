#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - determines if integer is a prime
 * @n: the number
 * Return: 1 if input integer is a prime number
 * if not 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - determines if number is prime recursively
 * @n: number
 * @i: iterator
 * Return: 1 if n is prime, if not 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
