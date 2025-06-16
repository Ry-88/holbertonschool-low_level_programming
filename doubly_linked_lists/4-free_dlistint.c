#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free all elements of dlistint_t list
 * @head: pointer to the head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *f_head;

	while (head != NULL)
	{
		f_head = head->next;
		free(head);
		head = f_head;
	}

}
