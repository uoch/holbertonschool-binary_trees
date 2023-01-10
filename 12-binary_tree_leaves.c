#include "binary_trees.h"
/**
 * binary_tree_leaves- function to calculate the size(adding child)
 * @tree: pointer to the  tree to check
 * Return: height of tree or 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
