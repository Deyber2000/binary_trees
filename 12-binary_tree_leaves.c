#include "binary_trees.h"

/**
 * binary_tree_leaves_recursion - recursive method for binary_tree_leaves
 * @tree: root of the bibary tree.
 * @count: counter.
 */

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

/**
 * binary_tree_leaves - Counts the leaves n a binary tree.
 * @tree: root.
 * Return: Number of leaves, 0 if tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	binary_tree_leaves_recursion(tree, &count);
	return (count);
}
