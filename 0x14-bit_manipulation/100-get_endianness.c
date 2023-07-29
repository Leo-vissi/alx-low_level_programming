#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness of the processor
 *
 * Return: returns 1 for little endian, 0 for big
 */

int get_endianness(void)
{
	int a = 1;
	char *x = (char *)&a;

	if (*x == 1)
		return (1);
	return (0);
}
