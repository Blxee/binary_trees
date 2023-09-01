#include "binary_trees.h"

/**
 * array_to_bst - converts an array to a BST
 *
 * @array: the array to be converted
 * @size: the length of the array
 *
 * Return: the root of the binary tree or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i = 0;
	bst_t *root = NULL;

	if (array == NULL || size <= 0)
		return (NULL);

	bst_insert(&root, array[i++]);

	while (i < size)
		bst_insert(&root, array[i++]);

	return (root);
}
