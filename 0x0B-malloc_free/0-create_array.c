#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of size
 * @size: Size of array
 * @c: Char to initialise array
 *
 * Return: NULL if fail or pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *valu;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	valu = malloc(sizeof(char) * size);

	if (valu == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		valu[x] = c;

	return (valu);
}
