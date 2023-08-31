#include "binary_trees.h"
#include "binary_tree_utils/binary_tree_true_inorder.c"

static size_t s_size;

/**
 * increase_size - adds 1 to the s_size variable
 *
 * @tree: the target tree
 */
void increase_size(const binary_tree_t *tree)
{
	(void)tree;
	s_size++;
}

/**
 * binary_tree_nodes - gets the length of nodea of a binary tree
 *
 * @tree: the target tree
 *
 * Return: the node length of the tree as int or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	s_size = 0;

	binary_tree_true_inorder(tree, &increase_size);

	return (s_size);
}
