#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	if (!tree)
		return (0);
	while(tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
	/* return((tree && tree->parent) ? 1 + binary_tree_depth : 0);*/
}