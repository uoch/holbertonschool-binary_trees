#include "binary_trees.h"
/**
 * binary_tree_sibling - function to serch for the sibling
 * @node: pointer to the  node
 * Return: brothr or sister of the given node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}

	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
