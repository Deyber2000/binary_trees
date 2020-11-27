#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes throught
 * a binary tree using pre-order traversal.
 * @tree: root node.
 * @func: pointer to function to print each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		/*Print current node*/
		func(tree->n);
		/*traverse left side*/
		binary_tree_preorder(tree->left, func);
		/*Traverse right side*/
		binary_tree_preorder(tree->right, func);
	}
}
