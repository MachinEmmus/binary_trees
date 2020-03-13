#include "binary_trees.h"
/**
 * binary_tree_sibling - sibling of a node.
 * @node: find the sibling.
 * Return: to the sibiling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->left != node)
		return (parent->left);
	return (parent->right);
}
