#include "binary_trees.h"

/**
 * binary_tree_uncle - findes the uncle of a node.
 * @node: node.
 * Return: pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent)
		{
			if(node->parent->parent)
			{
				if (node->parent->parent->left == node->parent)
					return(node->parent->parent->right);
				else
					return(node->parent->parent->left);
			}
			else
				return (NULL);
		}
	else
		return (NULL);
}
