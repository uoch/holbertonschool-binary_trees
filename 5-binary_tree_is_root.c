#include "binary_trees.h"
/**
 * binary_tree_is_root - function to know if the node is root or not
 * @node: pointer to the  node to check
 * Return: 1 if node is a root 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
