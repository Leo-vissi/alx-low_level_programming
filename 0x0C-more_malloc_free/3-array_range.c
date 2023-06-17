#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *
 * @min: The minimum value of the range.
 *
 * Return: Pointer to the created array.
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
