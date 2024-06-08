#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least one child
 * in a binary tree.
 * @tree: pointer to the root node of the tree to be traversed.
 * Return: If tree is NULL, the function returns 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		return  (1 + binary_tree_nodes(tree->right) +
			 binary_tree_nodes(tree->left));
	return (0);
}
