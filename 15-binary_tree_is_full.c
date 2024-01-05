#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    /* If the tree is a leaf, it is full by definition */
    if (!tree->left && !tree->right)
        return (1);

    /* If the tree has one child, it is not full */
    if ((tree->left && !tree->right) || (!tree->left && tree->right))
        return (0);

    /* Recursively check for fullness in the left and right subtrees */
    return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

