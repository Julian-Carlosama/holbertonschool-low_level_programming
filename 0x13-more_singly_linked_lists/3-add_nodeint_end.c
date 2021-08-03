#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of list.
 *
 * @head: Head of the node
 *
 * @n: Elements.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *aux;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	aux = *head;

	if (*head == NULL)
		*head = node;

	else
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = node;
	}
	return (node);

}
