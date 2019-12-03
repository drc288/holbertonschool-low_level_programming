#include "binary_trees.h"

/**
 * binary_tree_preorder - print in preorder
 * @tree: the first position in the tree
 * @func: function to print
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
