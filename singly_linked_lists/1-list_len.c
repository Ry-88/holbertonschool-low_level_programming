#include "lists.h"
#include <stddef.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
