#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list_t list to be pointer the head
 */

void free_list(list_t *head)
{
	list_t *vari;

	while (head)
	{
		vari = head->next;
		free(head->str);
		free(head);
		head = vari;
	}
}
