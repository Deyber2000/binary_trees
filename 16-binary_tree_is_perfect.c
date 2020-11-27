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


/**
 * binary_tree_is_leaf - checks if a node is a leaf.
 * @node: node.
 * Return: 1 if leaf, 0 if not.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!(node->left) && !(node->right))
		return (1);
	return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: root.
 * Return: 1 if perfect, 0 if not or tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
