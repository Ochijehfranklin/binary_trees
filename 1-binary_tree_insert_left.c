#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left child of another node
 * @parent: pointer to node to insert the left child in
 * @value: value to store in new node
 * Return: pointer to new node or NULL(Parent NULL)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (!new)
		return (NULL);
	if (parent->left)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
