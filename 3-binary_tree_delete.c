include "binary_trees.h"

/**
 * binary_tree_delete - deletes entire binary tree
 * @tree: tree to delete
 * Return: void
 */

{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
