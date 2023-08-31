#include "binary_trees.h"

/**
 * it goes through a binary tree using in-order traversal - binary_tree_inorder.
 *
 *  A pointer to the root node of the tree we want to traverse : @tree
 *  A pointer to a function to call for each node we want to call : @func
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

