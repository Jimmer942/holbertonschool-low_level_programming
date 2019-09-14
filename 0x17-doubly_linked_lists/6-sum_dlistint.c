#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list.
 * @head: linked list to print.
 * Return: the sum of all int data of the list.
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *p;
	int i, sum = 0;

	p = head;
	if (p == NULL)
		return (0);
	while (p->prev != NULL)
		p = p->prev;
	for (i = 0; p != NULL; i++)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
