#include "binary_trees.h"

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