#include "lists.h"

/**
* add_nodeint - Add a new node at the beginning.
*
* @head: head to pointer
*
* @n: Numbers of elements
*
* Return: The address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	return (*head = node);
}
