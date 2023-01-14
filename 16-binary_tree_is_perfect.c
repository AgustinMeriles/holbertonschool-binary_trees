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
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}

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

	retL = binary_tree_height(tree->left) + 1;
	retR = binary_tree_height(tree->right) + 1;
	return ((retL > retR) ? retL : retR);
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

	height = binary_tree_height_cus(tree);
	leaves = binary_tree_leaves_cus(tree);

	while (height > 0)
	{
		counter *= 2;
		height--;
	}

	if (counter == leaves)
		return (1);

	return (0);
}
