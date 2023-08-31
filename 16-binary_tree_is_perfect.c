#include "binary_trees.h"
#include "binary_tree_utils.c"
#include "9-binary_tree_height.c"
#include "10-binary_tree_depth.c"

static int s_height;
static int s_is_perfect;

/**
 * increase_perfect - mapping function to help find uneven trees
 *
 * @tree: the current traversed node
 */
void increase_perfect(const binary_tree_t *tree)
{
	if ((tree->left != NULL && tree->right == NULL)
			|| (tree->left == NULL && tree->right != NULL))
	{
		s_is_perfect = 0;
		return;
	}
	if (tree->left == NULL && tree->right == NULL)
		if (binary_tree_depth(tree) != s_height)
		{
			s_is_perfect = 0;
			printf("n: %d, h: %d, d: %d\n", tree->n, s_height, binary_tree_depth(tree));
		}
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect elswise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	s_height = binary_tree_height(tree);
	s_is_perfect = 1;

	binary_tree_true_postorder(tree, &increase_perfect);

	return (s_is_perfect);
}
