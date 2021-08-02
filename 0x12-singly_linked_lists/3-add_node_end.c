#include "lists.h"
/**
 * add_node_end - Function that add a node to end
 *
 * @head: Head of the liked list
 *
 * @str: String that store in the list.
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *aux;
	size_t elements;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);

	for (elements = 0; str[elements]; elements++)
		;
	node->len = elements;
	node->next = NULL;
	aux = *head;

	if (aux == NULL)
	{
		*head = node;
	}
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = node;
	}
	return (*head);
}
