#include "binary_trees.h"

/**
 * Inserts a node as the left-child of another node - binary_tree_insert_left.
 * The value to store in the new node : @value.
 * Pointer to the node to insert the left-child in : @parent
 *
 * Pointer to the created node, or NULL on failure or if parent is NULL :  Return
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *neew;

	if (parent == NULL)
		return (NULL);

	neew = binary_tree_node(parent, value);
	if (neew == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		neew->left = parent->left;
		parent->left->parent = neew;
	}
	parent->left = neew;

	return (neew);
}
