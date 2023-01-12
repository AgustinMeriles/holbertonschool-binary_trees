#include "binary_trees.h"

/**
 * binary_tree_size - Find the size of a binary tree
 * @tree: Tree node to measure from
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	count = binary_tree_size(tree->left) + 1;
	count += binary_tree_size(tree->right);

	return (count);
}
