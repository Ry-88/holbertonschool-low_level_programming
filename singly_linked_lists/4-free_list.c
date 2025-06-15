#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *head_temp;

	while (head != NULL)
	{
		head_temp = head->next;
		free(head->str);
		free(head);
		head = head_temp;
	}
}
