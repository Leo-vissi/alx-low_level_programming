#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_valu, owner_valu;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (name_len = 0; name[name_valu]; name_valu++);
	new_dog->name = malloc(name_valu + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (owner_valu = 0; owner[owner_valu]; owner_valu++);
	new_dog->owner = malloc(owner_valu + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (name_valu = 0; name[name_valu]; name_valu++);
	new_dog->name[name_valu] = name[name_valu];
	new_dog->name[name_valu] = '\0';
	new_dog->age = age;
	for (owner_valu = 0; owner[owner_valu]; owner_valu++);
	new_dog->owner[owner_valu] = owner[owner_valu];
	new_dog->owner[owner_valu] = '\0';

	return (new_dog);
}

