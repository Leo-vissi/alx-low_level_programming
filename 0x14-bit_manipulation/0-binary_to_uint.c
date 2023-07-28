#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a str of 0 and 1 chars
 *
 * Return: converted number,
 * 0 if b NULL or, b contains char other than 0 or 1.
*/

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int s = 1;
	unsigned int x = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
		x <<= s;
		if (b[a] == '1')
			x += 1;
	}
	return (x);
}
