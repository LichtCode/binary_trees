#include "binary_trees.h"

/**
* binary_tree_node - function that creates a new node in a binary tree.
*@parent: pointer to the parent node of the new node.
*@value: value to assign to the new node.
* Return: The function returns a pointer to the newly created node, or NULL if it fails.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
