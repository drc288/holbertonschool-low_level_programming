#include "binary_trees.h"

/**
 * bt_hi - create the recursivity for binary_tree_height
 * @tree: the tree
 *
 * Return: the sum of nodes
 */

size_t bt_hi(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree != NULL)
	{
		left = bt_hi(tree->left);
		right = bt_hi(tree->right);

		if (left > right)
			return (1 + left);
		else
			return (1 + right);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_height - get the height of the tree
 * @tree: the tree
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ri = 0;
	size_t le = 0;

	if (!tree)
		return (0);
	if (tree->left)
		le = bt_hi(tree->left);
	if (tree->right)
		ri = bt_hi(tree->right);

	if (le > ri)
		return (le);
	else
		return (ri);
}
