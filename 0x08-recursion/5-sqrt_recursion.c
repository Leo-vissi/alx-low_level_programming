#include "main.h"

int asqr(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: number to calc the square rt of
 *
 * Return: the result of the square rt
 */



int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (asqr(n, 0));
}

/**
 * asqr - Calc square root of n
 * @n: Number to calc square rt of
 * @i: Divisor to selc
 *
 * Return: The result of the square rt
 */

int asqr(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (asqr(n, i + 1));
}
