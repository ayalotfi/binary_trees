#include "binary_trees.h"

/**
 * this Measures the sizee of a binary tree - binary_tree_size.
 *
 * A pointer to the root node of the tree we want to measure the size : @tree
 *
 * Return: 0 if tree is NULL.
 */

size_tree binary_tree_size(const binary_tree_t *tree)
{
	size_tree size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	return (size);
}
