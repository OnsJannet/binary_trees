#include "binary_trees.h"
/**
 * binary_tree_postorder - Checks if a node is a root
 * @func: Pointer to the function
 * @tree: our tree
 * Return: 1 if root, 0 if not
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
	}
}
