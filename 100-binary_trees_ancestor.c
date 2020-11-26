#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds lowest common ancestor of two nodes.
 * @first: pointer to first node.
 * @second: pointer to second node.
 * Return: POinter to the lowesrt common ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *mother, *father;
	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	mother = first->parent, father = second->parent;
	if (first == father || !mother || (!mother->parent && father))
		return (binary_trees_ancestor(first, father));
	else if (mother == second || !father || (!father->parent && mother))
		return (binary_trees_ancestor(mother, second));
	return (binary_trees_ancestor(mother, father));
}
