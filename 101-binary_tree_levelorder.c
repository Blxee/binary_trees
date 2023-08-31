#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through binary tree using levelorder traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: the function to be applied to each value
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *_level[256] = {NULL}, **level = _level;
	const binary_tree_t *_level_copy[256] = {NULL}, **level_copy = _level_copy;
	const binary_tree_t **tmp;
	size_t i, j;

	if (tree == NULL)
		return;

	level[0] = tree;

	while (level[0])
	{
		for (i = j = 0; level[i]; i++)
		{
			(*func)(level[i]->n);

			if (level[i]->left)
				level_copy[j++] = level[i]->left;

			if (level[i]->right)
				level_copy[j++] = level[i]->right;
		}

		level_copy[j] = NULL;

		tmp = level;
		level = level_copy;
		level_copy = tmp;
	}
}
