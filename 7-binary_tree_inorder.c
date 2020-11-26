#include "binary_trees.h"

/**
 * binary_tree_inorder - GOes throught a binary tree using in-order traversal.
 * @tree: root node.
 * @func: pointer to function to print each node.
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
