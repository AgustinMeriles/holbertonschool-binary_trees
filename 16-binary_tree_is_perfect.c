#include "binary_trees.h"

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

	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);

	while (height > 0)
	{
		counter *= 2;
		height--;
	}

	if (counter == leaves)
		return (1);

	return (0);
}
