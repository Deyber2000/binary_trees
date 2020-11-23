#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left; 
		parent->left->parent = new; /*conect new->parent to root*/
	}
	/* If there's not a node in parent->left position*/
	parent->left = new;
	return (new);		
}