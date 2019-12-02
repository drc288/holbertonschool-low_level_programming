#include "binary_trees.h"

/**
 * binary_tree_node - create a new parent in the node
 * @parent: the parent null
 * value: id
 *
 * Return: the node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;

    if (new_node == NULL)
        return (NULL);

    new_node->n = value;
    new_node->right = NULL;
    new_node->left = NULL;

    if (parent)
    {
        free(new_node);
        parent->n = value;
        parent->right = NULL;
        parent->left = NULL;

        return (parent);
    }

    return (new_node);
}
