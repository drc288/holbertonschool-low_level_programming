#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node in the right position
 * @parent: the parent of the node
 * @value: the data of n
 * Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *tmp = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*Create the data*/
	new_node->n = value;
	new_node->left = NULL;

	/*Verify if parent in position left exists*/
	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
	}
	/*Switching the new node with the  tmp node*/
	else
	{
		/*Set the tmp fot the parent*/
		tmp = parent->right;
		/**
		 * Switch the parent in the left position with the new node
		 * and switch with the new node with the parent
		 */
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = tmp;
		tmp->parent = new_node;
	}
	return (new_node);

}
