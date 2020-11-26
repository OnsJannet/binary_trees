#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child
 * @parent: a pointer to the node to insert the right-child in
 * @value:  is the value to store in the new node
 * Return: a pointer to the created node / NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *newNode;

if (parent == NULL)
return (NULL);

newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
return (NULL);
newNode->n = value;
newNode->parent = parent;
newNode->right = parent->right;
parent->right = newNode;
if (newNode->right)
{
newNode->right->parent = newNode;
}
	newNode->left = NULL;
	return (newNode);
}
