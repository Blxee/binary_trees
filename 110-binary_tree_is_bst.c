#include "binary_trees.h"
#include "7-binary_tree_inorder.c"

static int s_is_bst;
static int s_last_n;

/**
 * is_bst - mapping function
 *
 * @n: the current node value
 */
void is_bst(int n)
{
	if (s_last_n >= n)
		s_is_bst = 0;
	s_last_n = n;
}

/**
 * binary_tree_is_bst - determines whether a tree is a BST
 *
 * @tree: the tree to be tested
 *
 * Return: 1 if tree is BST, 0 elsewise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	s_is_bst = 1;
	s_last_n = -999999999;

	binary_tree_inorder(tree, &is_bst);

	return (s_is_bst);
}
