#include "binary_trees.h"
/**
 * binary_tree_leaves - count nodes that are leaves
 * @tree: is my biary tree
 * Return: Number the nodes are leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	leaves = calc_leaves(tree, leaves);
	return (leaves);
}
/**
 * calc_leaves - Verify is node is a leave
 * @tree: Is my node
 * @leaves: is the count to leaves
 * Return: Count of leaves since tree
 */
size_t calc_leaves(const binary_tree_t *tree, size_t leaves)
{
	size_t lleft, lright;

	lleft = leaves;
	lright = leaves;
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lleft = calc_leaves(tree->left, leaves);
	lright = calc_leaves(tree->right, leaves);

	return (lleft + lright);
}

