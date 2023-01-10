#include "binary_trees.h"
/**
 * binary_tree_size- function to calculate the size(adding child)
 * @tree: pointer to the  tree to check
 * Return: height of tree or 0 otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((binary_tree_size(tree->left) + binary_tree_size(tree->right)) + 1);
}
