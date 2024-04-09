#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * Description: If parent already has a right-child, the new node must take
 *              its place, and the old right-child must be set as the
 *              right-child of the new node.
 * @parent:  pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (!parent)
		return (NULL);

	right_node = binary_tree_node(parent, value);
	if (!right_node)
		return (NULL);
	if (parent->right)
	{
		right_node->right = parent->right;
		right_node->right->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}
