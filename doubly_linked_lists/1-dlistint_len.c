#include "lists.h"
/**
 * dlistint_len - return number of elements of linked list
 * @h: pointer to the head of list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
