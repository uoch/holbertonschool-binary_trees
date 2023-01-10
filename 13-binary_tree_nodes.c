#include "binary_trees.h"
/**
 * binary_tree_nodes- function to calculate the size(adding child)
 * @tree: pointer to the  tree to check
 * Return: height of tree or 0 otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if ((!tree->left || !tree->right))
		return (1);
	return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
}
