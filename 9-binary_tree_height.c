#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;
	if (tree)
	{
	
		l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		/*if (tree->left)*/
				/*l_height = 1 + binary_tree_height(tree->left);*/
		/*else*/
		    /*l_height = 0;*/
		r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		/*if (tree->right)*/
				/*r_height = 1 + binary_tree_height(tree->right);*/
		/*else*/
				/*r_height = 0;*/			
		return ((l_height > r_height) ? l_height : r_height);
		/*if (l_height > r_height)*/
			/*return (l_height);*/
		/*else*/
			/*return (r_height);*/
	}
	return (0);

}
