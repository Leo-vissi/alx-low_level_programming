#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *valu1;
        char *relloc;
	unsigned int x;

	if (ptr != NULL)
		valu1 = ptr;
	else
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	relloc = malloc(new_size);

	if (relloc == NULL)
		return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
	relloc[x] = valu1[x];

	free(ptr);

	return (relloc);
}
