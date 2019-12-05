#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the left-child.
 * @parent: parent node
 * @value: int of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;


	if  (parent == NULL)
		return (NULL);

	left = malloc(sizeof(binary_tree_t));

	if (left == NULL)
		return (NULL);

	left->n = value;
	left->parent = parent;
	left->right = NULL;
	left->left = parent->left;
	parent->left = left;

	if (left->left)
		left->left->parent = left;

	return (left);
}
