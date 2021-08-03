#include "lists.h"

/**
* listint_len - Returns the number of elements.
*
* @h: Head type pointer of the list to process.
*
* Return: Elements.
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
