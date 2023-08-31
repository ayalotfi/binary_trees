c#include "binary_trees.h"

/**
 * this fuction cheks if a given node is a root - binary_tree_is_root.
 *
 * A pointer to the node to we want to check : @node.
 *
 * Return: 1 if node is a root else it returns 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1)
