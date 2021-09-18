#include "lists.h"

/**
 * add_dnodeint - Function that allow add a new node
 * to start of the list
 *
 * @head: Node initial
 *
 * @n: Number that containt
 *
 * Return: New node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t  *new_n = NULL;

	new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
	{
		return (NULL);
	}
	new_n->n  = n;
	new_n->prev = NULL;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	else
	{
		new_n->next = *head;
		(*head)->prev = new_n;
		*head = new_n;

		return (new_n);
	}
}
