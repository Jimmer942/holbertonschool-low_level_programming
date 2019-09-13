#include "lists.h"
/**
 * free_dlistint - Returns the number of elements in a linked dlistint_t list.
 * @head: linked list to print.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	p = head;
	while (p->prev != NULL)
		p = p->prev;
	while (p != NULL)
	{
		head = head->next;
		free(p);
		p = head;
	}
}
