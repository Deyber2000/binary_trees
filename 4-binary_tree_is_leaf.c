#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: node.
 * Return: 1 if leaf, 0 if not.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}

/*OTHER METHOD*/
/*int binary_tree_is_leaf(const binary_tree_t *node)*/
/*{*/
/*(node && !node->left && !node->right)*/
/*		return (1);*/

/*	return (0);*/
/*}*/

