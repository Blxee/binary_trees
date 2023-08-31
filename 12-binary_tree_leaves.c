#include "binary_trees.h"
#include "binary_tree_utils.c"

static size_t s_leaves;

/**
 * increase_leaves - goes through a binary tree and counts leaves
 *
 * @tree: the tree to traverse
 */
void increase_leaves(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		s_leaves++;
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: the tree to gets its leaves
 *
 * Return: the number of leaves of the tree as int or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	s_leaves = 0;

	binary_tree_true_inorder(tree, &increase_leaves);

	return (s_leaves);
}
