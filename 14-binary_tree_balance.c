#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Height of the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	else
		left = 0;

	if (tree->right)
		right = binary_tree_height(tree->right) + 1;
	else
		right = 0;

	return (left > right ? left : right);
}

/**
 * binary_tree_balance - Measures the balance of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: balance of the binary tree, or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left);
	else
		left = -1;

	if (tree->right)
		right = binary_tree_height(tree->right);
	else
		right = -1;

	return (left - right);
}
