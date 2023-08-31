#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: the parent node
 * @value: the value of the node
 *
 * Return: a pointer to binary_tree_t node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = parent->left;
	node->right = NULL;
	if (node->left)
		node->left->parent = node;

	parent->left = node;

	return (node);
}
