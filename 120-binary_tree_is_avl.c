#include "binary_trees.h"
#include "110-binary_tree_is_bst.c"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_avl - determines whether a tree is an AVL tree
 *
 * @tree: the tree to delete
 *
 * Return: 1 if it is AVL, 0 elsewise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int diff;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!binary_tree_is_bst(tree))
		return (0);

	if (tree->left && tree->right)
	{
		diff = binary_tree_height(tree->left) - binary_tree_height(tree->right);
		diff = diff < 0 ? -diff : diff;
		if (diff > 1)
			return (0);
	}

	return (1);
}
