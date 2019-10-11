#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: size of the hash table
 * Return: a pointer to the newly created hash table
 * If something went wrong, the function return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	hash_node_t **new_node;

	if (size == 0)
		return (NULL);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t) * size);
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = new_node;
	return (new_table);
}
