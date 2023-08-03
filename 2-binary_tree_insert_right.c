#include "binary_trees.h"

/**
 * binary_tree_insert_right - This inserts the node of the right-child of another node.
 *@parent: The pointer that points to the node to insert the right-child in.
 *@value: the value to store in the new node,
 * Return: The pointer to the created node, or NULL on failure or if no.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	return (node);
}
