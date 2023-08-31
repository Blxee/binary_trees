#include "../binary_trees.h"

/**
 * binary_tree_true_preorder - goes through a binary tree using pre-order traversal
 *
 * @tree: the tree to traverse
 * @func: the function to apply to each node
 */
void binary_tree_true_preorder(const binary_tree_t *tree, void (*func)(const binary_tree_t *))
{
  if (tree == NULL || func == NULL)
    return;

  (*func)(tree);
  binary_tree_true_preorder(tree->left, func);
  binary_tree_true_preorder(tree->right, func);
}
