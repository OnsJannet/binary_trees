#include "binary_trees.h"
/**
 * binary_tree_height - Checks if a node is a root
 * @tree:  a pointer to the root of the tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_l = 0, right_l = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left_l = binary_tree_height(tree->left);
		right_l = binary_tree_height(tree->right);
	if (left_l > right_l)
	return (left_l + 1);
	return (right_l + 1);
}
