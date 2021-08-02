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
	list_t *update;

	while ((update = head) != NULL)
	{
		head = head->next;
		free(update->str);
		free(update);
	}
}
