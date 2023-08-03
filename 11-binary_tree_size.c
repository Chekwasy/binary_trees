#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t a = 1;

		if (tree->left)
			a = a + binary_tree_size(tree->left);
		if (tree->right)
			a = a + binary_tree_size(tree->right);
		return (a);
	}
	return (0);
}
