#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog struct
 * @d: Pointer to the dog struct to free
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
