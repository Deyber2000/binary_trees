#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: root.
 * Return: size of the tree, 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/*Until there is no nodes*/
	if (!tree)
		return (0);
	/*Call the function recursively in left and right side and keep adding 1*/
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
