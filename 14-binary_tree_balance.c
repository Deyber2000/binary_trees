#include "binary_trees.h"

/**
 * binary_tree_height_plus_one - measure the height plus one.
 * @tree: root.
 * Return: height plus 1.
 */

size_t binary_tree_height_plus_one(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;
	if (tree)
	{
	
		l_height = tree->left ? 1 + binary_tree_height_plus_one(tree->left) : 1;
		/*if (tree->left)*/
				/*l_height = 1 + binary_tree_height(tree->left);*/
		/*else*/
		    /*l_height = 0;*/
		r_height = tree->right ? 1 + binary_tree_height_plus_one(tree->right) : 1;
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

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: root.
 * Return: balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return(0);
	return (binary_tree_height_plus_one(tree->left) - binary_tree_height_plus_one(tree->right));
}
