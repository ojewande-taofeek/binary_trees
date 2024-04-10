#include "binary_trees.h"

/**
 * tree_height_left - measures the height of tree along the left
 * @tree: a pointer to the root of the tree to measure the left height
 * @left_h: the height of the left path
 * Return: the left height
 */

size_t tree_height_left(const binary_tree_t *tree, size_t left_h)
{
	if (tree->left == NULL)
		return (left_h);
	left_h++;
	return (tree_height_left(tree->left, left_h));
}

/**
 * tree_height_right - measures the height of tree along the right
 * @tree: a pointer to the root of the tree to measure the right height
 * @right_h: the height of the right path
 * Return: the right height
 */

size_t tree_height_right(const binary_tree_t *tree, size_t right_h)
{
	if (tree->right == NULL)
		return (right_h);
	right_h++;
	return (tree_height_right(tree->right, right_h));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (!tree || (tree->right == NULL && tree->left == NULL))
		return (0);

	right_height = 0;
	left_height = 0;

	left_height = tree_height_left(tree, left_height);
	right_height = tree_height_right(tree, right_height);
	if (right_height > left_height)
		return (right_height);
	return (left_height);
}
