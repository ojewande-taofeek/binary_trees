#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: NULL, if no lowest common ancestor
 *         lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *tmp;

	if (!first || !second)
		return (NULL);

	tmp = second;
	while (first)
	{
		second = tmp;
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *) first);
			second = second->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
