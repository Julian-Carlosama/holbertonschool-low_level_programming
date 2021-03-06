#include "lists.h"

/**
* print_listint - Show all elements of listint_t
*
* @h: head type pointer of the list
*
* Return: Number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
