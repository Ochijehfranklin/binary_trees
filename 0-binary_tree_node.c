#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: Points to the parent of node to create
 * @value: value of new node created
 *
 * Return: pointer to node created else NULL if error
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
