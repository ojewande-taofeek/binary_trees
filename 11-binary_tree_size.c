#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a node in a binary tree
 * @tree: pointer to the node to measure the size
 * Return: size, total number of nodes
 *         if tree is NULL, 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s_left = 0, s_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		s_left = binary_tree_size(tree->left);
	if (tree->right)
		s_right = binary_tree_size(tree->right);

	return (s_right + s_left + 1);
}

/**
 * Description: Another implentation
 * size_t size = 0;
 * if (!tree)
 * return (0);
 * size += binary_tree_size(tree->left);
 * size += binary_tree_size(tree->right);
 * size++;
 * return (size);
 */
