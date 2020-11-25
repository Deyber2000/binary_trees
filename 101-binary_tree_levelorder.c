#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;
	if (tree)
	{
	
		l_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		/*if (tree->left)*/
				/*l_height = 1 + binary_tree_height(tree->left);*/
		/*else*/
		    /*l_height = 0;*/
		r_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		/*if (tree->right)*/
				/*r_height = 1 + binary_tree_height(tree->right);*/
		/*else*/
				/*r_height = 0;*/			
		return ((l_height > r_height) ? l_height : r_height);
		/*if (l_height > r_height)*/
			/*return (l_height);*/
		/*else*/
			/*return (r_height);*/
	}
	return (0);

}

void binary_tree_level(const binary_tree_t *tree,size_t l, void(*func)(int))
{
	if (tree == NULL)
		return;
	if (l == 1)
		func(tree->n);
	else if (l > 1)
	{
		binary_tree_level(tree->left, l - 1, func);
		binary_tree_level(tree->right, l - 1, func);
	}		
}
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (tree == NULL || func == NULL)
		return;
	height = binary_tree_height(tree);
	for (i = 1; i <= height; i++)
	{
		binary_tree_level(tree, i, func);
	}	
}