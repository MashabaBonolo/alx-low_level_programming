#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - function that return 1 if it is prime and 0 if not
 * @n: int n
 * Return: 1 if n is a prime number and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate prime number
 * @n: int n
 * @i: int i
 * Return: 1 if n is prime and 0 if not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
