#include "binary_trees.h"
#include <limits.h>

/**
 * binary_tree_is_bst_aux - Aux function for is_bst.
 * @tree: root.
 * @lowest: lowest.
 * @highest: highest.
 * Return: True or false.
 */
int binary_tree_is_bst_aux(const binary_tree_t *tree, int lowest, int highest)
{
	if (tree)
	{
		/*if the nodes value is lower than lowest or highest than higher*/
		/*the tree is not BST*/
		if (tree->n < lowest || tree->n > highest)
			return (0);
		/*Recurr on left side subtracting 1 the value of the node*/
		/*Recurr to the right side adding 1 to the value of the node*/
		return (binary_tree_is_bst_aux(tree->left, lowest, tree->n - 1) &&
			binary_tree_is_bst_aux(tree->right, tree->n + 1, highest));
	}
	return (1);
}

/**
 * binary_tree_is_bst - CHecks if bt is BST.
 * @tree: root.
 *
 * Return: True or False.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_is_bst_aux(tree, INT_MIN, INT_MAX));
}
