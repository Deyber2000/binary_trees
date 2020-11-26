#include "binary_trees.h"

/**
 * binary_tree_postorder - GOes throught a binary tree using post-order traversal.
 * @tree: root node.
 * @func: pointer to function to print each node.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
