#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as the right-child.
 * @parent: parent node
 * @value: int of the new node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r;


	if  (parent == NULL)
		return (NULL);

	r = malloc(sizeof(binary_tree_t));

	if (r == NULL)
		return (NULL);

	r->n = value;
	r->parent = parent;
	r->left = NULL;
	r->right = parent->right;
	parent->right = r;

	if (r->right)
		r->right->parent = r;

	return (r);
}
