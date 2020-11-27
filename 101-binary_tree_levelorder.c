#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to root node.
 *
 * Return: height of tree, Null if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree)
	{
		l_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l_height > r_height) ? l_height : r_height);
	}
	return (0);

}

/**
 * binary_tree_level - check each level
 * @tree: root.
 * @l: level.
 * @func: call for each node.
 *
 * Return: does not return something
 */
void binary_tree_level(const binary_tree_t *tree, size_t l, void(*func)(int))
{
	if (tree == NULL)
		return;
	if (l == 1)
		func(tree->n);
	else if (l > 1)
	{
		binary_tree_level(tree->left, l - 1, func);
		binary_tree_level(tree->right, l - 1, func);
	}
}

/**
 * binary_tree_levelorder - Goes through a binary
 * tree using level-order traversal.
 * @tree: root.
 * @func: call for each node.
 *
 * Return: does not return something
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (i = 1; i <= height; i++)
	{
		binary_tree_level(tree, i, func);
	}
}
