#include "binary_trees.h"
/**
 * binary_tree_preorder - to traves the tree in pretorde [root-left-right]
 * @tree: pointer to the  tree to travers
 * @func: (*func)(int):pointer to the the function to be applied to the node value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, (*func));
	binary_tree_preorder(tree->right, (*func));
}
