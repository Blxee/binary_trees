#include "binary_trees.h"
#include "binary_tree_utils/binary_tree_true_postorder.c"

static int s_full;

/**
 * increase_perfect - mapping function to help find uneven trees
 *
 * @tree: the current traversed node
 */
void increase_perfect(const binary_tree_t *tree)
{
	if ((tree->left != NULL && tree->right == NULL)
			|| (tree->left == NULL && tree->right != NULL))
		s_full = 0;
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full elswise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	s_full = 1;
	binary_tree_true_postorder(tree, &increase_perfect);
	return (s_full);
}
