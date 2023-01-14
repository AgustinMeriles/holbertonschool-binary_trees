#include "binary_trees.h"

/**
 * binary_tree_leaves_cus - counts the leaves in a binary tree
 * @tree: root node of tree
 *
 * Return: 0 if tree is null, 1 if no leaves, otherwise leave num
 */
size_t binary_tree_leaves_cus(const binary_tree_t *tree)
{
	size_t left, right;

	left = right = 0;
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_leaves_cus(tree->left);
	right = binary_tree_leaves_cus(tree->right);
	return (left + right);
}

/**
 * binary_tree_height_cust - get height of binary tree
 *
 * @tree: pointer to the root node.
 *
 * Return: 0 if tree is null, tree height otherwise.
*/
size_t binary_tree_height_cust(const binary_tree_t *tree)
{
	size_t retL, retR;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	retL = binary_tree_height_cust(tree->left);
	retR = binary_tree_height_cust(tree->right);
	return ((retL > retR ? retL : retR) + 1);
}

/**
 * binary_tree_is_perfect - check if #leaves == #branches
 *
 * @tree: pointer to root node
 *
 * Return: 1 if equal, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, leaves, counter = 1;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	height = binary_tree_height_cust(tree);
	leaves = binary_tree_leaves_cus(tree);

	while (height > 0)
	{
		counter = counter * 2;
		height--;
	}
	if (counter == leaves)
		return (1);

	return (0);
}
