#include "binary_trees.h"

void binary_tree_leaves_recursion(const binary_tree_t *tree, size_t *count)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			++(*count);
		else
		{
				binary_tree_leaves_recursion(tree->left, count);
				binary_tree_leaves_recursion(tree->right, count);
		}
	}
}

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;
	binary_tree_leaves_recursion(tree, &count);
	return (count);
}

/*
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;
	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
*/
