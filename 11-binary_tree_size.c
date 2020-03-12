#include "binary_trees.h"
/**
 * binary_tree_size - size of my tree
 * @tree: of node to middle the size
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	size += calc_size(tree, size);
	return (size);
}
/**
 * calc_size - function to calculate the size
 * @tree: my node
 * @size: is count to my size
 * Return: The size of node
 */
size_t calc_size(const binary_tree_t *tree, size_t size)
{
	size_t sleft, sright;

	sleft = size;
	sright = size;
	if (tree == NULL)
		return (0);

	sleft += calc_size(tree->left, sleft);
	sright += calc_size(tree->right, sright);
	return (sleft + sright + 1);
}
