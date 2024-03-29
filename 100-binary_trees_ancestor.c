#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *first_parents[128] = {NULL};
	size_t i = 0;

	if (first == NULL || second == NULL)
		return (NULL);

	while (first)
	{
		first_parents[i++] = first;
		first = first->parent;
	}

	while (second)
	{
		for (i = 0; first_parents[i]; i++)
			if (first_parents[i] == second)
				return ((binary_tree_t *)second);
		second = second->parent;
	}

	return (NULL);
}
