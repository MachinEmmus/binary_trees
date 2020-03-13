#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Verify if a tree if perfect.
 * @tree: root of the tree.
 * Return: 1 if the tree is perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right;
	int left;
	int size;

	if (tree == NULL)
		return (0);
	size = 0;
	left = calc_perfect(tree->left, size);
	right = calc_perfect(tree->right, size);

	if (right != left)
		return (0);
	if (right < 0 || left < 0)
		return (0);
	return (1);
}

/**
 * calc_perfect - if perfect.
 * @tree: root of the tree.
 * @size: size of the tree.
 * Return: 1 if the tree is perfect
 */
int calc_perfect(const binary_tree_t *tree, int size)
{
	int pright;
	int pleft;

	pleft = size;
	pright = size;
	if (tree == NULL)
		return (0);
	pleft = pleft + calc_perfect(tree->left, pleft);
	pright = pright + calc_perfect(tree->right, pright);
	if (tree->left == NULL && tree->right != NULL)
		return (-1);
	if (tree->left != NULL && tree->right == NULL)
		return (-1);
	if (pright < 0 || pleft < 0)
		return (-1);
	if (pleft != pright)
		return (-1);
	return (pright + 1);
}
