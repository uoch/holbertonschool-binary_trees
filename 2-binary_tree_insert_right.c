#include "binary_trees.h"
/**
 * binary_tree_insert_right - function to insert node to the right
 * @parent: pointer to the parent node
 * @value: integer to be assigned to the new node
 * Return: array of string
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = parent->right;
	parent->right = node;
	node->left = NULL;

	if (node->right)
		node->right->parent = node;

	return (node);
}
