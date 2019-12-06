#include "binary_trees.h"

/**
 * binary_tree_uncle - get the uncle in binary tree
 * @node: the node to get the uncle
 *
 * Return: the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *pa = NULL;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	pa = node->parent;

	if (pa->parent->right == pa)
		return (pa->parent->left);

	return (pa->parent->right);
}