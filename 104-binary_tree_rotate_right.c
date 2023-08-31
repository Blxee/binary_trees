#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 *
 * @tree: the tree to be rotated
 *
 * Return: the new root of the tree or NULL
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *left, *tmp;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	left = tree->left;

	tmp = tree->parent;
	tree->parent = left;
	left->parent = tmp;
	if (tmp)
	{
		if (tmp->right == tree)
			tmp->right = left;
		else
			tmp->left = left;
	}

	tmp = left->right;
	left->right = tree;
	tree->left = tmp;
	if (tree->left)
		tree->left->parent = tree;

	return (left);
}
