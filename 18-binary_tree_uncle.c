#include "binary_trees.h"
/**
 * binary_tree_uncle - to fix tomorow
 * @node: pointer to the  node
 * Return: brothr or sister of the given node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node){

	if (!node || !node->parent|| !node->parent->parent)
	{
		return (NULL);
	}
	if ((node == node->parent->parent))
	{
		return (node->parent->parent->left);
	}
	else
	{
		return (node->parent->parent->right);
	}
    return(NULL);

}