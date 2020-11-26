#include "binary_trees.h"
#include <limits.h>

int binary_tree_is_bst_aux(const binary_tree_t *tree, int lowest, int highest)
{
	if (tree)
	{
		if (tree->n < lowest || tree->n > highest)
			return (0);
		return (binary_tree_is_bst_aux(tree->left, lowest, tree->n - 1) &&
			binary_tree_is_bst_aux(tree->right, tree->n + 1, highest));	
	}
	return (1);
}
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_is_bst_aux(tree, INT_MIN, INT_MAX));	
}