#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: point to head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *i = h;
	size_t i = 0;

	while (i != NULL)
	{
		printf("%d\n", i->n);
		count += 1;
		i = i->next;
	}
	return (count);
}
