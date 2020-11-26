#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node
 *
 * Return: 1 if leaf, 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL)
		return (1);
    else if (node->right == NULL)
    	return (1);
	else
		return (0);
}