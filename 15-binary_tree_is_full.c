#include "binary_trees.h"

/**
 * binary_tree_is_full_aux - Recursive helper for binary_tree_is_full.
 * @tree: root.
 * Return: 1 if full, 0 if not.
 */

int binary_tree_is_full_aux(const binary_tree_t *tree)
{
		if(tree)
			{
			if ((tree->right && !tree->left) || (!tree->right && tree->left) || binary_tree_is_full_aux(tree->left) == 0 || binary_tree_is_full_aux(tree->right) == 0)
				return(0);
			}
		return(1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: root.
 * Return: 1 if full, 0 if not.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if(!tree)
		return(0);
	return(binary_tree_is_full_aux(tree));
}
