#include "lists.h"
/**
 * delete_dnodeint_at_index - Delets the nth node of a dlistint_t linked list.
 * @head: linked list to print.
 * @index: node to look for.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *a, *b;
	unsigned int i;

	p = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		p = p->next;
		if (p != NULL)
			p->prev= NULL;
		p = *head;
		*head = p->next;
		free(p);
		return (1);
	}
	while (p->prev != NULL)
		p = p->prev;
	for (i = 0; i != index && p != NULL; i++)
		p = p->next;
	if (index > i)
		return (-1);
	a = p->prev;
	b = p->next;
	a->next = b;
	b->prev = a;
	free(p);
	return (1);
}
