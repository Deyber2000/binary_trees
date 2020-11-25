#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));	
}
int is_complete(const binary_tree_t *tree, unsigned int index, size_t size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);
	return (is_complete(tree->left, 2 * index + 1, size) && is_complete(tree->right, 2* index + 2, size));
}

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;
	unsigned int i = 0;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);
	return (is_complete(tree, i, size)); 	
}



