#include "binary_trees.h"
/**
 * binary_tree_depth- function to calculate the depth(working on parent)
 * @tree: pointer to the  tree to check
 * Return: height of tree or 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if ((tree == NULL) || (tree->parent == NULL))
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
