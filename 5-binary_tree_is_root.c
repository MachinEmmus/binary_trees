#include "binary_trees.h"
/**
 * binary_tree_is_root - my tree
 * @node: is the node to verify
 * Return: 1 if node is a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
