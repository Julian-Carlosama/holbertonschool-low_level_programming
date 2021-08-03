#include "lists.h"

/**
 * free_listint - free list.
 *
 * @head: Head of the list.
 *
 * Return: No return.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while ((aux = head) != NULL)
	{
		head = head->next;
		free(aux);
	}
}
