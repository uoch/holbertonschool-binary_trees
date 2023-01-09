#include "binary_trees.h"
/**
 * binary_tree_inorder - to traves the tree in pretorde [left- root-right]
 * @tree: pointer to the  tree to travers
 * @func:  (*func)(int): pointer to the  the function to be applied to the node value
 * Return: 1 if node is a root 0 otherwise
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_preorder(tree->left, (*func));
	func(tree->n);
	binary_tree_preorder(tree->right, (*func));
}
