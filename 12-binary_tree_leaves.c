#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: if tree is NULL, 0
 *         number of leaves
 *         A NULL pointer is not a leaf
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	if (!(tree->left) && !(tree->right))
		leaves++;
	return (leaves);
}
