#include "binary_trees.h"

/**
 * binary_tree_is_root - checks whether a node is a root node
 *
 * @node: the node to check
 *
 * Return: 1 if it's root, 0 elsewise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
