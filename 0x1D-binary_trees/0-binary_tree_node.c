#include "binary_trees.h"

/**
 * binary_tree_node - create a new parent in the node
 * @parent: the parent null
 * @value: id
 *
 * Return: the node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*Create a new node*/
	binary_tree_t *new_node = NULL;

	/*Verify if the node exists*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/*Create the basic structure of the node*/
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;
	/*If parent exists set value of parent*/
	if (parent)
	{
		new_node->parent = parent;
	}
	/*If not set NULL*/
	else
	{
		new_node->parent = NULL;
	}

	return (new_node);
}
