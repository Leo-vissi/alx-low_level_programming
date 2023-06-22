#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Pointer a new string
 * which is a duplicate of the string
 * @str: Pointer to char
 *
 * Return: Always 0.
*/

char *_strdup(char *str)
{
	char *valu;
	unsigned int x, y;

	if (str == NULL)
		return (NULL);

	x = 0;

	while (str[x] != '\0')
		x++;

	valu = malloc(sizeof(char) * (x + 1));

	if (valu == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		valu[y] = str[y];

	valu[x] = '\0';

	return (valu);
}
