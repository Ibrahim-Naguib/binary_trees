#include "binary_trees.h"

/**
 * binary_tree_nodes - Measures the nodes of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Nodes of the binary tree, or 0 if tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left)+ 1 + binary_tree_nodes(tree->right));
	return (0);
}
