#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 *
 * @head: Head of the linked list.
 *
 * @index: Index of the node.
 *
 * Return: NOdes
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index; i++)
	{
		if (head != NULL)
			head = head->next;
	}
	return (head);
}
