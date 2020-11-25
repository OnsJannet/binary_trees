#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 * Return: a pointer to the created node / NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *newNode;

if (parent == NULL)
return (NULL);

newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
return (NULL);
newNode->n = value;
newNode->parent = parent;
newNode->left = newNode->left;
parent->left = newNode;
if (newNode->left)
{
newNode->left->parent = newNode;
}
	newNode->right = NULL;
	return (newNode);
}
