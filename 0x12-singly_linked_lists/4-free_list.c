#include "lists.h"
/**
 * free_list - is a function that frees a list_t list.
 * @head: linked list to free.
 */
void free_list(list_t *head)
{
	list_t *p = head;

	while (p != NULL)
	{
		p = p->next;
		free(p->str);
		free(p);
	}
}
