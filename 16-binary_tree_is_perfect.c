#include "binary_trees.h"

/**
 * binary_tree_h - measures the height
 * @tree: pointer to the root
 * Return: 0, if tree is NULL
 *         height of the tree
 */

int binary_tree_h(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (!tree)
		return (0);

	left_h = 1 + binary_tree_h(tree->left);
	right_h = 1 + binary_tree_h(tree->right);

	return (left_h > right_h ? left_h : right_h);
}

/**
 * binary_tree_bf - measures the balance factor
 * @tree: pointer to the root
 * Return: 0, if tree is NULL
 *         diff between the left and right height
 */


int binary_tree_bf(const binary_tree_t *tree)
{
	int left_l = 0, right_l = 0;

	if (!tree)
		return (0);

	left_l += 1 + binary_tree_h(tree->left);
	right_l += 1 + binary_tree_h(tree->right);

	return (left_l - right_l);
}


/**
 * binary_tree_is_complete - measures if a tree is complete
 * @tree: pointer to the root
 * Return: 0, if tree is NULL
 *         height of the tree
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);

	return (binary_tree_is_complete(tree->left) &&
			binary_tree_is_complete(tree->right));
}

/**
 * binary_tree_is_perfect - measures if a tree is perfect
 * @tree: pointer to the root
 * Return: 0, if tree is NULL
 *         1, if perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int bf, complete;

	if (!tree)
		return (0);

	bf = binary_tree_bf(tree);
	complete = binary_tree_is_complete(tree);

	if (bf == 0 && complete == 1)
		return (1);
	return (0);
}
