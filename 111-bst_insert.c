#include "binary_trees.h"

/**
 * bst_insert - inserts a new node to a BST
 *
 * @tree: the tree to delete
 * @value: the value to be inserted
 *
 * Return: the newly created node or NULL elsewise
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node = NULL, *traverser = NULL;

	if (tree == NULL)
		return (NULL);
	traverser = *tree, node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);
	node->n = value, node->left = NULL, node->right = NULL;
	if (*tree == NULL)
	{
		*tree = node;
		return (node);
	}
	while (1)
	{
		if (traverser->n == value)
		{
			free(node);
			return (NULL);
		}
		if (value < traverser->n)
		{
			if (traverser->left)
				traverser = traverser->left;
			else
			{
				traverser->left = node, node->parent = traverser;
				break;
			}
		} else
		{
			if (traverser->right)
				traverser = traverser->right;
			else
			{
				traverser->right = node, node->parent = traverser;
				break;
			}
		}
	} return (node);
}
