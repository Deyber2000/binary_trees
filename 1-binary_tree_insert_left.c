#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node.
 * @parent: nodes parent.
 * @valiue: nodes value.
 * Return: eturn a pointer to the created node, or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	/*OJO WE have to make 3 connections if !parent->left, and 4 connections if parent->left*/
	if (parent->left != NULL)
	{
		new->left = parent->left; 
		parent->left->parent = new; /*conect new->parent to root*/
	}
	/* If there's not a node in parent->left position*/
	parent->left = new;
	return (new);		
}
