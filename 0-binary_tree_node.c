#include "binary_trees.h"

/**
 * binary_tree_node - creates a new binary tree node
 *
 * @parent: the parent node
 * @value: the value of the node
 *
 * Return: a pointer to binary_tree_t node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent != NULL)
		if (parent->left != NULL && parent->right != NULL)
			return (NULL);

	node = malloc(sizeof(*node));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent != NULL)
	{
		if (parent->left == NULL)
			parent->left = node;
		else
			parent->right = node;
	}

	return (node);
}
