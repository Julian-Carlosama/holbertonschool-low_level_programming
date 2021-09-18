#include "lists.h"

/**
* dlistint_len - Returns the number of elements.
*
* @h: Head type pointer of the list to process.
*
* Return: Elements.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
