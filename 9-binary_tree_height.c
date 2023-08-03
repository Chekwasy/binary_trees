#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t a = 0, b = 0;

		if (tree->left)
			a = 1 + binary_tree_height(tree->left);
		else
			a = 0;
		if (tree->right)
			a = 1 + binary_tree_height(tree->right);
		else
			a = 0;
		if (a > b)
			return (a);
		else
			return (b);
	}
	return (0);
}
