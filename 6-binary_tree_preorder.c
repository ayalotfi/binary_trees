#include "binary_trees.h"

/**
 * this one Goes through a binary tree using pre-order traversal - binary_tree_preorder
 *
 * A pointer to a function to call for each node : @func.
 * A pointer to the root node of the tree to traverse : @tree.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
