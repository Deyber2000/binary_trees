#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to root node.
 * Return: height of tree, Null if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree)
	{
		l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		/*Return the height of the side who has the highest height*/
		return ((l_height > r_height) ? l_height : r_height);
	}
	return (0);
}


/*OTHER WAY*/
/*size_t binary_tree_height(const binary_tree_t *tree)*/
/*{*/
/*size_t l_height = 0, r_height = 0;*/

/*if (tree)*/
/*{*/
/*		if (tree->left)*/
/*			l_height = binary_tree_height(tree->left) + 1;*/
/*	if (tree->right)*/
/*			r_height = binary_tree_height(tree->right) + 1;*/
/*	return ((l_height > r_height) ? l_height : r_height);*/
/* }*/
/* return (0)*/
/*}*/
