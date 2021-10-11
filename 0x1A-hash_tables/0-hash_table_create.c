#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: Is the size of the array.
 *
 * Return: A pointer to the newly created hash table
 * or if something went wrong, return NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	hash_node_t **item = NULL;
	unsigned long int index = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	item = malloc(sizeof(hash_node_t *) * size);
	if (item == NULL)
		return (NULL);

	while (index < size)
	{
		item[index] = NULL;
		index++;
	}

	new_table->size = size;
	new_table->array = item;
	return (new_table);
}
