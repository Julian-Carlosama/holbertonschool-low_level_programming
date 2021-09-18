#include "lists.h"

/**
 * add_dnodeint_end - Function that add a node to
 * the end of the list.
 *
 * @head: Store the node.
 *
 * @n: Number to add into a structure.
 *
 * Return: New node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *new_n = NULL, *aux = NULL;

	new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n  = n;
	new_n->prev = NULL;
	new_n->next = NULL;
	aux = *head;

	if (*head == NULL)
	{
		*head = new_n;
	}
	else
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = new_n;
	}
	new_n->prev = *head;
	return (new_n);
}
