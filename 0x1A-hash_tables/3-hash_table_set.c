#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table to add or update the key/value.
 *
 * @key: key, key can not be an empty string.
 *
 * @value: Is the value associated with the key.
 * value must be duplicated. value can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *aux = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	aux = NULL;
	aux = ht->array[index];

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			aux->value = strdup(value);
			return (1);
			free(aux->value);
		}
		aux = aux->next;
	}

	new = NULL;
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
