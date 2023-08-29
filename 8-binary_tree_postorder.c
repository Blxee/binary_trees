
#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order traversal
 *
 * @tree: the tree to traverse
 * @func: the function to apply to each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
  if (tree == NULL || func == NULL)
    return;

  binary_tree_inorder(tree->left, func);
  binary_tree_inorder(tree->right, func);
  (*func)(tree->n);
}