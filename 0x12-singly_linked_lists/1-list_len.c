#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @head: pointer to the list_t list
 *
 * Return: number a head
 */
size_t list_len(const list_t *head)
{
	size_t v = 0;

	while (head)
	{
		v++;
		head = head->next;
	}
	return (v);
}
