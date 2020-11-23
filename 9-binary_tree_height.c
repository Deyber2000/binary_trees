#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;
	if (tree)
	{
	
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		/*  if (tree->left != NULL)
			l = 1 + binary_tree_height;
		    else
		    	l = 0;
		*/	    	
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		/*
			if (tree->right != NULL)
				r = 1 + binary_tree_height;
			else
				r = 0;
		*/			
		return ((l > r) ? l : r);
		/*
			if (l > r)
				return (l);
			else
				return (r);
		*/	
	}
	return (0);

}