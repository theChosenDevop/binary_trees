#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *right_node;

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		right_node = parent->right;
		parent->right = new_node;
		new_node->right = right_node;
		right_node->parent = new_node;
	}
	return (new_node);
}
