#include "binary_trees.h"
#include "./7-binary_tree_inorder.c"

static size_t s_size;

/**
 * increase_size - adds 1 to the s_size variable
 *
 * @value: the value of the current node
 */
void increase_size(int value)
{
	(void)value;
	s_size++;
}

/**
 * binary_tree_size - gets the size of a binary tree
 *
 * @tree: the tree to gets its size
 *
 * Return: the size of the tree as int or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	s_size = 0;

	binary_tree_inorder(tree, &increase_size);

	return (s_size);
}
