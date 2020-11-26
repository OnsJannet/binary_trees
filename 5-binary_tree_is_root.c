#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Pointer to the node
 * Return: 1 if leaf, 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
