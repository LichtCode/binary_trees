#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure.
 * Return: if tree is NULL, the function returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 1, right = 1;

		if (tree->right)
			right +=  binary_tree_height(tree->right);
		if (tree->left)
			left +=  binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}

/**
 * binary_tree_balance - calculates the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure.
 * Return: If tree is NULL, the function returns 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
