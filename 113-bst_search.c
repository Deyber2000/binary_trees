#include "binary_trees.h"

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
