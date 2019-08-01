#include "lists.h"
/**
 * free_list - is a function that frees a list_t list.
 * @head: linked list to free.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
}
