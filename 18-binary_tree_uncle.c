#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL, parent is NULL,
 *         or the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	/* Check if the parent of the node is the left child of its grandparent */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	/* Check if the parent of the node is the right child of its grandparent */
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);

	return (NULL); /* Node has no uncle */
}
