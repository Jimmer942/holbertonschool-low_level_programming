#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts the nth node of a dlistint_t linked list.
 * @h: linked list to print.
 * @idx: node to look for.
 * @n: data of the node.
 * Return: the node at index.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p, *a, *b, *new;
	unsigned int i;

	p = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (p == NULL && idx != 0)
		return (NULL);
	if (p == NULL && idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	idx--;
	while (p->prev != NULL)
		p = p->prev;
	for (i = 0; i != idx && p != NULL; i++)
		p = p->next;
	if (idx > i)
		return (NULL);
	if (p->next == NULL)
		new = add_dnodeint_end(h, n);
	else
	{
		a = p;
		b = a->next;
		new->prev = a;
		new->next = b;
		a->next = new;
		b->prev = new;
	}
	return (new);
}
