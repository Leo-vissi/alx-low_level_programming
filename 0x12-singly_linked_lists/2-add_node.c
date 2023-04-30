#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the list_t list
 * @str: string to add in the node
 *
 *  Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_strdup;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_strdup = malloc(sizeof(list_t));
	if (!new_strdup)
		return (NULL);

        new = strdup(str);
        if (!new)
	{
	        free(new_strdup);	
                return (NULL);
        }
	new_strdup->str = new;
	new_strdup->len = strlen(new);
	new_strdup->next = (*head);
	(*head) = new_strdup;

	return (new_strdup);
}