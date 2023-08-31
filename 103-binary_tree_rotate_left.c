#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 *
 * @tree: the tree to be rotated
 *
 * Return: the new root of the tree or NULL
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *right, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	right = tree->right;

	tmp = tree->parent;
	tree->parent = right;
	right->parent = tmp;
	if (tmp)
	{
		if (tmp->left == tree)
			tmp->left = right;
		else
			tmp->right = right;
	}

	tmp = right->left;
	right->left = tree;
	tree->right = tmp;
	if (tree->right)
		tree->right->parent = tree;

	return (right);
}
