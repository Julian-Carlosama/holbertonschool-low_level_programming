#include "lists.h"

/**
 * get_dnodeint_at_index - Function that allow take a index
 * of the node.
 *
 * @head: Initial node.
 *
 * @index: Position to evaluate.
 *
 * Return: Null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head  != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
