#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: NULL, node is NULL or has no uncle
 *         uncle;
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = node->parent->parent;

	if (!node || !(node->parent) || !(grandparent))
		return (NULL);
	if (node->parent == (grandparent->right))
		return (grandparent->left);
	return (grandparent->right);
}
