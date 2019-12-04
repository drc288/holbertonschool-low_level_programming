#include "binary_trees.h"

/**
 * binary_tree_leaves - verify if node are leaves
 * @tree: the tree
 *
 * Return: 1 if node are 1 leave else 2
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (count);
}
