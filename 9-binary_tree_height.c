#include "binary_trees.h"

/**
 * this reresents the Measures the height of a binary tree - binary_tree_height.
 *
 * A pointer to the root node of the tree which we want to measure the heigh : @tree
 *
 * Return: 0 if tree is NULL.
 */

size_tree binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_tree lef = 0, rrig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rrig = tree->rright ? 1 + binary_tree_height(tree->rright) : 0;

		return ((lef > rrig) ? lef : rrig);
	}

	return (0);
}
