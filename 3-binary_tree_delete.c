#include "binary_trees.h"

/**
 * it Deletes a whole binary tree - binary_tree_delete.
 *
 * A pointer to the root node of the tree we want to delete : @tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
