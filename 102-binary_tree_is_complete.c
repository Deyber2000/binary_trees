#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: root.
 * Return: size of the tree, 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));	
}

/**
 * is_complete - 
 * @tree: root.
 * @index:
 * @size:
 * Return:
 */

int is_complete(const binary_tree_t *tree, unsigned int index, size_t size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);
	return (is_complete(tree->left, 2 * index + 1, size) && is_complete(tree->right, 2* index + 2, size));
}

/**
 * binary_tree_is_complete - CHecks if a bt is complete.
 * @tree: root.
 * Return: 1 if complete, 0 if not.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;
	unsigned int i = 0;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);
	return (is_complete(tree, i, size)); 	
}



