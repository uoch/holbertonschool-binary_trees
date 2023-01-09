#include "binary_trees.h"
/**
 * binary_tree_postorder- to traves the tree in pretorde [left-right-root]
 * @tree: pointer to the  tree to travers
 * @func:  (*func)(int): pointer to the  the function to be applied to the node value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, (*func));
	binary_tree_postorder(tree->right, (*func));
	func(tree->n);
}
