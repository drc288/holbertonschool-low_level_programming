#include "binary_trees.h"

/**
 * binary_tree_is_full - verify if the tree are full
 * @tree: the binary tree
 *
 * Return: 1 if is full, 0 is not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int le = 0, ri = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		le = binary_tree_is_full(tree->left);
	if (tree->right != NULL)
		ri = binary_tree_is_full(tree->right);

	if (ri == 1 && le == 1)
		return (1);
	else
		return (0);

}
