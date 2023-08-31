#include "binary_trees.h"

/**
 * binary_tree_custom_inorder - goes through a binary tree inorder traversal
 *
 * @tree: the tree to traverse
 * @height: accumulator variable
 *
 * Return: height of the tree
 */
int binary_tree_custom_inorder(const binary_tree_t *tree, int height)
{
	int left_height = height, right_height = height;

	if (tree->left != NULL)
		left_height = binary_tree_custom_inorder(tree->left, height + 1);
	if (tree->right != NULL)
		right_height = binary_tree_custom_inorder(tree->right, height + 1);

	return (left_height > right_height ? left_height : right_height);
}

/**
 * binary_tree_height - gets the height of a binary tree
 *
 * @tree: the tree to gets its height
 *
 * Return: the hight of the tree as int or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);

	height = binary_tree_custom_inorder(tree, 0);
	return (height);
}
