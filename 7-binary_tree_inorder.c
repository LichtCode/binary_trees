#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree using in-order traversal.
 * @tree: pointer to the root node of the tree to be traversed.
 * @func: pointer to a function to be called for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
