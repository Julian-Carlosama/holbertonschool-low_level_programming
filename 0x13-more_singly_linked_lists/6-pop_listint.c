#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 *
 * @head: Head of the liked list.
 *
 * Return: 0 if the liked list is empty.
 */

int pop_listint(listint_t **head)
{
	int elmts;
	listint_t *aux;

	if (*head == NULL)
		return (0);

	aux = (*head);
	elmts = aux->n;
	(*head) = (*head)->next;
	free(aux);
	return (elmts);
}
