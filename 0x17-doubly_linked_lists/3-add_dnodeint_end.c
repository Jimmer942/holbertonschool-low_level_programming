#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: linked list to print.
 * @n: data of the node.
 * Return: the number of nodes.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *p;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	p = *head;
	while (p->next != NULL)
		p = p->next;
	new->prev = p;
	new->next = NULL;
	p->next = new;
	return (new);
}
