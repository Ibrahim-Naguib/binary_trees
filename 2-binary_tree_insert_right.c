#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as the right
 * child of a parent node.
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent == NULL)
		return (NULL);

	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
