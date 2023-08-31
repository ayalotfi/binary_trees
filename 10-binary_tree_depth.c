#include "binary_trees.h"

/**
 * reresents Measures the depth of a node in a binary tree - binary_tree_depth.
 *
 *  A pointer to the node which we want to measure the depth : @tree
 *
 * Return: 0 if tree is NULL.
 */

size_tree binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
