#include "lists.h"

/**
 * free_list - Function that free a list
 *
 * @head: Head of the linked list.
 *
 * Return: No return.
 */

void free_list(list_t *head)
{
	list_t *update = head;

	while (update != NULL)
	{
		head = head->next;
		free(update->str);
	}
}
