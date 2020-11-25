#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node of the node to create.
 * @value: the value to put in the new node
 * Return: Always 0 (Success) / NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;


    newNode = malloc(sizeof( binary_tree_t ));
    if (newNode == NULL)
            return (NULL);

    newNode->node = value;
    newNode->parent = parent;
    newNode->left = newNode->right = NULL;
    