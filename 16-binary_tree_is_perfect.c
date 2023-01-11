#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int l,r,k;

    l = tree_height(tree->left);
    r= tree_height(tree->right);
    k = l-r;
    if(!k)
        return(1);
    return(0);
}

int tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
    {
        return (0);
    }
    if ((node->left == NULL) && (node->right == NULL))
    {
        return (1);
    }

    return (0);
}
int tree_height(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if ((tree == NULL) || ((tree->left == NULL) && (tree->right == NULL)))
		return (0);
	l = tree_height(tree->left);
	r = tree_height(tree->right);
	return (((l > r) ? l + 1 : r + 1));
}
