#include "lists.h"

/**
 * free_dlistint - free list.
 *
 * @head: Head of the list.
 *
 * Return: No return.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;

	while ((aux = head) != NULL)
	{
		head = head->next;
		free(aux);
	}
	if (head == NULL)
	{
		return;
	}
}
