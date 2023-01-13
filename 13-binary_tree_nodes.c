#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes w/at least 1 child @ Btree
 * @tree: Pointer to the tree
 *
 * Return: 0 if tree is null, num of nodes otherwise.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes += (tree->left || tree->right) ? 1 : 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
