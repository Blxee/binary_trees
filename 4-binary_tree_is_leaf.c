#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks whether a node is a leaf
 *
 * @node: the node to check
 *
 * Return: 1 if it's a leaf, 0 elsewise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
  if (node == NULL)
    return (0);

  if (node->left == NULL && node->right == NULL)
    return (1);
  else
    return (0);
}