#include "binary_trees.h"
/**
 * binary_tree_uncle - looks for the uncle
 * @node: pointer to the  node
 * Return: return the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node->parent->parent)
	{
		if (node->parent->parent->left &&
			node->parent->parent->left != node->parent)
			return (node->parent->parent->left);
		if (node->parent->parent->right &&
			node->parent->parent->right != node->parent)
			return (node->parent->parent->right);
	}
	return (NULL);
}
