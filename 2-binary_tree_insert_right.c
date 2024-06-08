#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a new node as the right child
 * of a given node.
 * @parent: pointer to the node where the new right child will be added.
 * @value: the value to assign to the new node.
 * Return: pointer to the newly created node, or NULL if the operation fails
 * or if no parent is provided.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	return (node);
}