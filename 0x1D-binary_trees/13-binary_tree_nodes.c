#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes
 * @tree: the tree
 *
 * Return: the number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);

	count = binary_tree_nodes(tree->right) +
		 binary_tree_nodes(tree->left);

	if (tree->left != NULL || tree->right != NULL)
		return (count + 1);

	return (count);
}
