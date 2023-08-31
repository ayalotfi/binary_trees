#include "binary_trees.h"

/**
 * this one Counts the leaves in a binary tree - binary_tree_leaves.
 *
 *  A pointer to the root node of the tree we  want to  count the number of leaves : @tree
 *
 * Return: 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}

	return (leaves);
}
