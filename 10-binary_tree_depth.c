#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of a binary tree
 *
 * @tree: the tree to gets its depth
 *
 * Return: the depth of the tree as int or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
