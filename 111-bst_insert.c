#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a BST.
 * @tree: root.
 * @value: value to insert.
 * Return: Pointer to new node.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)

	if (value < (*tree)->value)
		(*tree)->left = bst_insert((*tree)->left, value);
	else
		(*tree)->right = bst_insert((*tree)->right, value);
}
