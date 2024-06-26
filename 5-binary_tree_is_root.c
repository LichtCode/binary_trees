#include "binary_trees.h"

/**
 * binary_tree_is_root - determines if a given node is the root node.
 * @node: pointer to the node to be checked.
 * Return: 1 if the node is a root, otherwise 0.
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
