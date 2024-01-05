#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, size, expected_size;

    if (!tree)
        return (0);

    height = binary_tree_height(tree);
    size = binary_tree_size(tree);
    expected_size = 1 << height;

    return (size == expected_size);
}
