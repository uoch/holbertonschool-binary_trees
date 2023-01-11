#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function to calculate the height(working on child)
 * @tree: pointer to the  tree to check
 * Return: height of tree or 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r, k, m, n, x;

	if (!tree)
		return (0);

	m = tree_leaves(tree->left);
	n = tree_leaves(tree->right);
	l = tree_height(tree->left);
	r = tree_height(tree->right);
	k = l - r;
	x = m - n;
	if (!k && !x)
		return (1);
	return (0);
}
/**
 * tree_height - function to calculate the height(working on child)
 * @tree: pointer to the  tree to check
 * Return: height of tree or 0 otherwise
 */

int tree_height(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree == NULL)
		return (0);
	if ((!tree->left && !tree->right && !tree->parent))
	{
		return (0);
	}

	l = tree_height(tree->left);
	r = tree_height(tree->right);
	return (((l > r) ? l + 1 : r + 1));
}
/**
 * tree_leaves - function to calculate the height(working on child)
 * @tree: pointer to the  tree to check
 * Return: height of tree or 0 otherwise
 */

int tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (tree_leaves(tree->right) + tree_leaves(tree->left));
}
