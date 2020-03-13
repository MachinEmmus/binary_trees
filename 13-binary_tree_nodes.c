#include "binary_trees.h"
/**
 * binary_tree_nodes - Count nodes
 * @tree: node for the binary_tree
 * Return: Number of nodes in the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	nodes = 0;
	if (tree == NULL)
		return (0);
	nodes = calc_nodes(tree, nodes);
	return (nodes);
}
/**
 * calc_nodes - Counts the nodes in a binary tree.
 * @tree: root
 * @nodes: Nodes to start to count
 * Return: The number of nodes in the tree.
 */
size_t calc_nodes(const binary_tree_t *tree, size_t nodes)
{
	size_t nleft;
	size_t nright;

	nleft = nodes;
	nright = nodes;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		nodes = nodes + 1;
	nleft = nleft + calc_nodes(tree->left, nleft);
	nright = nright + calc_nodes(tree->right, nright);
	return (nodes + nright + nleft);
}
