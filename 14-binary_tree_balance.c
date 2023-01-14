#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, function return 0
*/
size_t binary_tree_height_cus(const binary_tree_t *tree)
{
	size_t retL, retR;

	if (!tree)
		return (0);

	retL = binary_tree_height(tree->left) + 1;
	retR = binary_tree_height(tree->right) + 1;
	return ((retL > retR) ? retL : retR);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height_cus(tree->left) - binary_tree_height_cus(tree->right));
}