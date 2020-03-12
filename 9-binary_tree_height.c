#include "binary_trees.h"
/**
 * binary_tree_height - height of my binary tree
 * @tree: is the binary tree
 * Return: Size of the Tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
		return (0);
	height = calc_height(tree, height);
	return (height - 1);
}
/**
 * calc_height - Recursion Function that return the height
 * @tree: my binary tree
 * @height: Is the size
 * Return: Finally height
 */
size_t calc_height(const binary_tree_t *tree, size_t height)
{
	size_t hleft, hright;

	hleft = height;
	hright = height;
	if (tree == NULL)
		return (0);
	hleft = hleft + calc_height(tree->left, height);
	hright = hright + calc_height(tree->right, height);

	if (hleft > hright)
		return (hleft + 1);
	return (hright + 1);
}

