#include "main.h"

/**
 * _pow_recursion - Calc returns the value of X to Y
 * @x: Value to raise 
 * @y: Time to raise
 *
 * Return: Int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
