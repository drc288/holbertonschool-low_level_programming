#include "binary_trees.h"

/**
 * bt_hi - create the recursivity for binary_tree_height
 * @tree: the tree
 *
 * Return: the sum of nodes
 */

size_t bt_hi(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree != NULL)
	{
		left = bt_hi(tree->left);
		right = bt_hi(tree->right);

		if (left > right)
			return (1 + left);
		else
			return (1 + right);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_height - get the height of the tree
 * @tree: the tree
 *
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ri = 0;
	size_t le = 0;

	if (!tree)
		return (0);
	if (tree->left)
		le = bt_hi(tree->left);
	if (tree->right)
		ri = bt_hi(tree->right);

	if (le > ri)
		return (le);
	else
		return (ri);
}

/**
 * binary_tree_balance - get the balance of the node
 * @tree: the binary tree
 *
 * Return: a integer to verify the balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int le = 0, ne = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		le = binary_tree_height(tree->left);
	else
		le = -1;

	if (tree->right != NULL)
		ne = binary_tree_height(tree->right);
	else
		ne = -1;

	return (le - ne);
}

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

/**
 * binary_tree_is_perfect - verify if the tree are perfect
 * @tree: the binary tree
 *
 * Return: 1 if the tree are perfect, if not return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
	{
		if (binary_tree_is_perfect(tree->left) ==
		    binary_tree_is_perfect(tree->right))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
