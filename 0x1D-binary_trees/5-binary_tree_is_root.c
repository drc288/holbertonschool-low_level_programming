#include "binary_trees.h"

/**
 * binary_tree_is_root - verify if the node are the root
 * @node: the node a verify
 *
 * Return: 1 if is the node else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
