#include "binary_trees.h"

/**
 * binary_tree_height_cus - get height of binary tree
 *
 * @tree: pointer to the root node.
 *
 * Return: 0 if tree is null, tree height otherwise.
*/
size_t binary_tree_height_cus(const binary_tree_t *tree)
{
	size_t retL, retR;

	if (!tree)
		return (0);

	retL = binary_tree_height_cus(tree->left) + 1;
	retR = binary_tree_height_cus(tree->right) + 1;
	return ((retL > retR) ? retL : retR);
}

/**
 * binary_tree_balance - measures the balance of a tree
 *
 * @tree: pointer to the root node.
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height_cus(tree->left) -
		binary_tree_height_cus(tree->right));
}
