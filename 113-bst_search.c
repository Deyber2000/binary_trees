#include "binary_trees.h"

/**
 * bst_search: Search for a value in a BST.
 * @tree: root.
 * @value: value to search for.
 * Return: Pointer to node that contains value.
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (tree->n == value)
		return (tree);
	if (value < tree->n)
		return (bst_search->left, value);
	if (value > tree->n)
		return (bst_search->right, value);
}
