#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: linked list to print.
 * @index: node to look for.
 * Return: the node at index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i;

	p = head;
	if (p == NULL)
		return (NULL);
	while (p->prev != NULL)
		p = p->prev;
	for (i = 0; i != index && p != NULL; i++)
		p = p->next;
	if (index > i)
		return (NULL);
	return (p);
}
