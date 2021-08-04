#include "lists.h"

/**
 * free_listint2 - Free linked list
 *
 * @head: Head of the list
 *
 * Return: No return.
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			aux = (*head);
			(*head) = (*head)->next;
			free(aux);
		}
		free(*head);
	}
	free(*head);
	*head = NULL;
}
