#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: address or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *creat;
	unsigned int main = 0;

	while (str[main])
		main++;

	creat = malloc(sizeof(list_t));
	if (!creat)
		return (NULL);

	creat->str = strdup(str);
	creat->main = main;
	creat->next = (*head);
	(*head) = creat;

	return (*head);
}
