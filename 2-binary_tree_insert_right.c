#include "binary_trees.h"

/**
 * Inserts a node as the right-child of another nodea - binary_tree_insert_right.
 * The value to store in the new node : @value.
 * Pointer to the node to insert the right-child in : @parent
 *
 * Pointer to the created node, or NULL on failure or if parent is NULL : Return
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *neew;

	if (parent == NULL)
		return (NULL);

	neew = binary_tree_node(parent, value);
	if (neew == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		neew->right = parent->right;
		parent->right->parent = neew;
	}
	parent->right = neew;

	return (neew);
}
