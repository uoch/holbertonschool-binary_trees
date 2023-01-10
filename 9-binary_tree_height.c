#include "binary_trees.h"
/**
 * binary_tree_height - function to calculate the height(working on child)
 * @tree: pointer to the  tree to check
 * Return: height of tree or 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (((l > r) ? l + 1 : r + 1));
}
