#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0, if tree is NULL
 *         number of nodes
 *         A NULL pointer is not a node
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	if ((tree->left) || (tree->right))
		nodes++;
	return (nodes);
}
