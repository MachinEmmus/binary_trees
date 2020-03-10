#include "binary_trees.h"
/**
 * binary_tree_node - create the root of binary tree
 * @parents: Node parent
 * @value: value of node
 * Return: New Node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *root;
    root = malloc(sizeof(binary_tree_t));
    if (root == NULL)
        return(NULL);
    root->parent = parent;
    root->n = value;
    return (root);
}
