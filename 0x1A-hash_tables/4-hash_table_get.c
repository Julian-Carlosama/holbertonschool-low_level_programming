#include "hash_tables.h"

/**
 * hash_table_get - function that get the value of the specified key
 *
 * @ht: table
 *
 * @key: keys
 *
 * Return: the value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux = NULL;
	unsigned long int index = 0;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[index];

	while (aux != NULL)
	{
		if (strcmp(aux->key, key) == 0)
			break;
		aux = aux->next;
	}

	if (aux == NULL)
		return (NULL);

	else
		return (aux->value);
}
