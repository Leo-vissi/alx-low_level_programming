#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t linked list
 * @new_node: pointer to the head of the list
 */
void free_list(list_t *new_node)
{
	list_t *vari;

	while (new_node)
	{
                vari = new_node->next;
		free(new_node->str);
		free(new_node);
		new_node = vari;
	}
}
