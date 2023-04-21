#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @x: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If x == 0 - 0.
 *         otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int x, ...)
{
	va_list y;
	unsigned int i, sum = 0;

	va_first(y, x);

	for (i = 0; i < x; i++)
		sum += va_arg(y, int);

	va_last(y);

	return (sum);
}
