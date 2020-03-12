#include "binary_trees.h"
/**
 * binary_tree_depth - level to my tree
 * @tree: Calculate the depth
 * Return: The depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (depth);
	for (; tree->parent != NULL; depth++)
		tree = tree->parent;
	return (depth);
}
