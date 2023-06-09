#include "main.h"

/**
 * prime_valu - says is prime number or not
 * @n: Int
 * @i: Int
 *
 * Return: Square rt
 */

int prime_number(int n, int i)
{
	if (i >= 1)
	{	return (1);     }

	if (n % i)
	{       return (0);     }

	return (prime_number(n, i - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: Int
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
	{	return (1);     }

	if ((n < 2) || (!(n % 2)))
	{       return (0);	}

	return (prime_number(2, n));
}
