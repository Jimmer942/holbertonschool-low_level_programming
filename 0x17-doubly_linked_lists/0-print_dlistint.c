#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: linked list to print.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p;
	int i;

	p = h;
	while (p->prev != NULL)
		p = p->prev;
	for (i = 0; p != NULL; i++)
	{
		printf("%i\n", p->n);
		p = p->next;
	}
	return (i);
}
