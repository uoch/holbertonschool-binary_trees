#include "binary_trees.h"
/**
 * binary_tree_uncle - 
 * @node: pointer to the  node
 * Return: return the uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node || !node->parent || !node->parent->parent)
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->left);
	}
	else
	{
		return (node->parent->parent->right);
	}
	return (NULL);
}
