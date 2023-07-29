#include "main.h"

/**
 *flip_bits - returns the number of bits you would need to
 *flip to get from one number to another.
 *@n: integer n
 *@m: number to flip
 *
 *Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nbflip;
	unsigned long int a;

	a = 0;
	nbflip = a ^ m;
	while (nbflip)
	{
		if (nbflip & 1)
			a++;
		nbflip >>= 1;
	}
	return (a);
}
