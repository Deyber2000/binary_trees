#include "binary_trees.h"

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!(node->left) && !(node->right))/*if(node == NULL || node->left != NULL || node->right != NULL)*/
		return (1); /*return (0)*/
	return (0); /*return (1)*/	
}