#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of elements and initializes it to 0.
 *
 * @nmemb: The number of elements to array.
 * @size: The size of each element.
 *
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int x;

	if (nmemb == 0 || size == 0)
	return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
	return (NULL);

	for (x = 0; x < nmemb * size; x++)
	a[x] = 0;

	return (a);
}
