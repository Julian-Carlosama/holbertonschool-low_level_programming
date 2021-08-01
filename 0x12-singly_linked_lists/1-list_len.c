#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked
 *
 * @h: Liked list to process
 *
 * Return: number of elements of the list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
