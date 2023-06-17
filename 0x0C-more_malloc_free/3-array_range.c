#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * containing all values from min to max.
 *
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: Pointer to the created array.
 * If malloc fails or min is greater than max, the function returns NULL.
 */

int *array_range(int min, int max)
{
	int *ar, x = 0, y = min;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));

	if (!ar)
		return (NULL);

	while (x <= max - m+in)
		ar[x++] = y++;

	return (ar);
}
