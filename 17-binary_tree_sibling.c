#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 * @node: node.
 * Return: pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if(!node || !node->parent)
		return (NULL);
	if(node == node->parent->left)
		return(node->parent->right);
	else
		return(node->parent->left);
}
