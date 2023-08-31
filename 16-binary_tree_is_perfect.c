#include "binary_trees.h"

/**
 * Checks if a binary tree is perfect - binary_tree_is_perfect.
 *
 *  A pointer to the root node of the tree to check : @tree
 *
 * Return: 0 if tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}

/**
 * Returns the depth of a given- depth.
 *         node in a binary tree.
 *  A pointer to the node to measure the depth of : @tree
 *
 * The depth of node : Return
 */

size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * Returns a leaf of a binary tree - get_leaf.
 * A pointer to the root node of the tree to find a leaf in : @tree
 *
 * A pointer to the first encountered leaf : Return
 */

const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * Checks if a binary tree is perfect recursively - is_perfect_recursive.
 * A pointer to the root node of the tree to check : @tree
 * The depth of one leaf in the binary tree : @leaf_depth.
 *  Level of current node : @level
 *
 * Return: If the tree is perfect, 1, otherwise 0.
 */

int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * Checks if a node is a leaf of a binary tree - is_leaf
 * A pointer to the node to check : @node
 *
 * Return: If the node is a leaf, 1, otherwise, 0.
 */

unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
