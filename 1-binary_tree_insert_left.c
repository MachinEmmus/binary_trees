#include "binary_trees.h"
/**
 * binary_tree_insert_left - create a new node in the left
 * @parent: Node parent
 * @value: 
 * Return: New Node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;
	new_node = binary_tree_node(parent, value);

    if (parent->left == NULL)
	{
		new_node->parent = parent;
		parent->left = new_node;
	}
	else
	{
		tmp = parent->left;
		tmp->parent = new_node;
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left = tmp;
	}
	return (new_node);
}   
