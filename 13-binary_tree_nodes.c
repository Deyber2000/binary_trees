#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a bt.
 * @tree: root.
 * Return: number of nodes with at least 1 child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		/*Any node in left or right of current node?, then current node is a node*/
		nodes += tree->left || tree->right ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
