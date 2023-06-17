#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *
 * @min: The minimum value of the range.
 *
 * Return: Pointer to the created array.
 * 
 */

int *array_range(int min, int max)
{
	int *array x = 0, y = min;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));

	if (!array)
		return (NULL);

	while (x <= max - min)
		array[x++] = y++;

	return (array);
}
