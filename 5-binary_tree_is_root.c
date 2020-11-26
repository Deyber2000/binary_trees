#include "binary_trees.h"

/**
 * binery_tree_is_root - checks if a node is the root.
 * @node: node.
 * Return: 1 if root, 0 if not.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);	
}
