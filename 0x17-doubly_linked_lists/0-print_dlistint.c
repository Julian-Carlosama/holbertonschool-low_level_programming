#include "lists.h"

/**
* print_dlistint - Show all elements of listint_t
*
* @h: head type pointer of the list
*
* Return: Number of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
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
