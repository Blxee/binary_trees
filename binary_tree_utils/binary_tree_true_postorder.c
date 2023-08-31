#include "../binary_trees.h"

/**
 * binary_tree_true_postorder - goes through a binary tree using post-order traversal
 *
 * @tree: the tree to traverse
 * @func: the function to apply to each node
 */
void binary_tree_true_postorder(const binary_tree_t *tree, void (*func)(const binary_tree_t *))
{
  if (tree == NULL || func == NULL)
    return;

  binary_tree_true_postorder(tree->left, func);
  binary_tree_true_postorder(tree->right, func);
  (*func)(tree);
}
