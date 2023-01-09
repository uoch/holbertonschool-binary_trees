#include "binary_trees.h"
/**
 * binary_tree_node - function to create a node
 * @parent: pointer to the parent node
 * @value: integer to be assigned to the new node
 * Return: array of string
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
