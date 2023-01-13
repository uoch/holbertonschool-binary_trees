#include "binary_trees.h"
/**
 * binary_trees_ancestor - looks for the uncle
 * @first: pointer to the  first node
 * @second: pointer to the  second node
 * Return: return pointer to the ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	traves_t *f_list = NULL, *s_list = NULL;
	traves_t *f_temp = f_list, *s_temp = s_list;
	const binary_tree_t *last_common = NULL;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent == first)
		return (binary_tree_t *)first;
	get_ancestors(first, &f_list);
	get_ancestors(second, &s_list);

	while (f_temp != NULL && s_temp != NULL)
	{
		if (f_temp->store == s_temp->store)
		{
			last_common = f_temp->store;
		}
		else
			break;
		f_temp = f_temp->next;
		s_temp = s_temp->next;
	}
	free_list(f_list);
	free_list(s_list);
	return ((binary_tree_t *)last_common);
}

/**
 * get_ancestors - stor address in linked list
 * @node: pointer to the  node
 * @list: list to stor address
 */

void get_ancestors(const binary_tree_t *node, traves_t **list)
{
	traves_t *new = malloc(sizeof(traves_t));

	if (!node)
		return;
	if (!new)
		return;
	new->store = node;
	new->next = *list;
	*list = new;

	get_ancestors(node->parent, list);
}
/**
 * free_list - looks for the uncle
 * @list: pointer to the  node
 */

void free_list(traves_t *list)
{
	traves_t *temp;

	while (list != NULL)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}
