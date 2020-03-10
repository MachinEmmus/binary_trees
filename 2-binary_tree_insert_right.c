#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a new node in the left
 * @parent: Node parent
 * @value: value to the node
 * Return: New Node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	new_node = binary_tree_node(parent, value);
	if (parent->right == NULL)
	{
		new_node->parent = parent;
		parent->right = new_node;
	}
	else
	{
		tmp = parent->right;
		tmp->parent = new_node;
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = tmp;
	}
	return (new_node);
}
