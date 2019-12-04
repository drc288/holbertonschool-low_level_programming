#include "binary_trees.h"

/**
 * binary_tree_postorder - print in order postorder
 * @tree: the first position in the tree
 * @func: function to print
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		(*func)(tree->n);
	}
}
