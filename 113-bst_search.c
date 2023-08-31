#include "binary_trees.h"

/**
 * bst_search - searches for a value in a BST
 *
 * @tree: the tree to search
 * @value: the value to look for
 *
 * Return: the node with the matching value, NULL elsewise
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	if (tree->n == value)
		return ((bst_t *)tree);
	else if (tree->left && value < tree->n)
		return (bst_search(tree->left, value));
	else if (tree->right && value > tree->n)
		return (bst_search(tree->right, value));

	return (NULL);
}
