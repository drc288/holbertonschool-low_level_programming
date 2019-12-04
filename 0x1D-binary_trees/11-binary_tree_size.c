#include "binary_trees.h"

/**
 * binary_tree_size - get the size of the tree
 * @tree: the tree
 *
 * Return: the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	/*data to recursivity*/
	size_t count = 1;

	if (tree == NULL)
		return (0);

	/* 1 = 1 (1 if exists the next node if not 0) + rec */
	count = count + binary_tree_size(tree->left);
	count = count + binary_tree_size(tree->right);

	return (count);
}
