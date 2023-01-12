#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, function return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t retL, retR;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	retL = binary_tree_height(tree->left);
	retR = binary_tree_height(tree->right);
	return (retL > retR ? retL : retR) + 1;
}
