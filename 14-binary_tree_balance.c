#include "binary_trees.h"

/**
 * _binary_tree_height - function to calculate the height(working on child)
 * @tree: pointer to the  tree to check
 * Return: height of tree or 0 otherwise
 */

int _binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);
	l = _binary_tree_height(tree->left);
	r = _binary_tree_height(tree->right);
	return ((l > r) ? l + 1 : r + 1);
}

/**
 * binary_tree_balance - function to calculate difference
 * @tree: pointer to the  tree to check
 * Return: l-r
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree == NULL)
		return (0);
	l = _binary_tree_height(tree->left);
	r = _binary_tree_height(tree->right);
	return (l - r);
}
