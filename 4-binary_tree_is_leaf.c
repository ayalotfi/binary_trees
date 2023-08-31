#include "binary_trees.h"

/**
 * this funcion's job  is checking if a node is a leafor not - binary_tree_is_leaf.
 *
 * A pointer to the node to check : @node
 *
 * Return: 1 if node is a leaf,if not it returns 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
