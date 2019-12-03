#include "binary_trees.h"

/**
 * binary_tree_is_leaf - verifi if the node is leaf
 * @node: node to verify
 *
 * Return: if n->r = nill and n->l = nill r 0
 * if not r 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if ((node->right == NULL) && (node->left == NULL))
		return (1);
	else
		return (0);
}
