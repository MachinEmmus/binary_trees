#include "binary_trees.h"
/**
 * binary_tree_is_leaf - my tree
 * @node: node to verify
 * Return: 0 If node have son in the right of left
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
