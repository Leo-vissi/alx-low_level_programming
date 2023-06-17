#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *ar_rang, x = 0, y = min;

	if (min > max)
		return (NULL);

	ar_rang = malloc((max - min + 1) * sizeof(int));

	if (!ar_rang)
		return (NULL);

	while (x <= max - min)
		ar_rang[x++] = y++;

	return (ar_rang);
}
