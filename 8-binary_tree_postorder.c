#include "binary_trees.h"

/**
 * this one Goes through a binary by tree post-order traversal - binary_tree_postorder.
 *
 *  A pointer to the root node of the tree we want to  traverse : @tree
 *  A pointer to a function to call for each node we need to call : @func
 .
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
