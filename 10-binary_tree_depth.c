#include "binary_trees.h"

/**
 * binary_tree_depth - Find out the depth of a binary tree
 *
 * @tree: Pointer to the first node on the tree
 *
 * Return: 0 on error, tree depth otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	else
		return (0);

}
