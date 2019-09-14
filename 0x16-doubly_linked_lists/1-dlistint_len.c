#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: linked list to print.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p;
	int i;

	p = h;
	while (p->prev != NULL)
		p = p->prev;
	for (i = 0; p != NULL; i++)
		p = p->next;
	return (i);
}
