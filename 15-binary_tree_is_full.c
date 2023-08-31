#include "binary_trees.h"

/**
 * Checks if a binary tree is full - binary_tree_is_full.
 *
 *  A pointer to the root node of the tree to check : @tree
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}

/**
 * Checks if a binary tree is full recursively - is_full_recursive.
 *
 * A pointer to the root node of the tree to check : @tree
 *
 * Return: 0 if tree is not NULL, otherwise 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)

			return (0);
	}

	return (1);
}
