#include "binary_trees.h"
/**
 * binary_tree_balance - how many node missing
 * @tree: my tree is the best
 * Return: Numbers to balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL)
		return (0);
	balance = calc_balance(tree, tree, balance);
	return (balance);
}
/**
 * calculate_balance - measures the balance factor of a binary tree.
 * @r: root node of the tree.
 * @tree: current node.
 * @balance: The difference between left and right node
 * Return: The difference between branches.
 */
int calc_balance(const binary_tree_t *r,
				 const binary_tree_t *tree, int balance)
{
	int bright;
	int bleft;

	bright = balance;
	bleft = balance;
	if (tree == NULL)
		return (0);
	bleft = bleft + calc_balance(r, tree->left, balance);
	bright = bright + calc_balance(r, tree->right, balance);

	if (tree == r)
		return (bleft - bright);
	if (bright > bleft)
		return (bright + 1);
	return (bleft + 1);
}
