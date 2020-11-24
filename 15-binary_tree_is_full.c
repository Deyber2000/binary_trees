#include "binary_trees.h"

int binary_tree_is_full_aux(const binary_tree_t *tree)
{
		if(tree)
			{
			if ((tree->right && !tree->left) || (!tree->right && tree->left) || binary_tree_is_full_aux(tree->left) == 0 || binary_tree_is_full_aux(tree->right) == 0)
				return(0);
			}
		return(1);
}

int binary_tree_is_full(const binary_tree_t *tree)
{
	if(!tree)
		return(0);
	return(binary_tree_is_full_aux(tree));
}
