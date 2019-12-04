#include "binary_trees.h"

/**
 * binary_tree_depth - count in the deph to up
 * @tree: the tree
 *
 * Return: the size
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t total = 0;

	if (tree == NULL)
		return (0);
	/* if tree->parent exists using rec if not return 0*/
	total = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (total);
}
