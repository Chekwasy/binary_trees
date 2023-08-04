#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t a = 0;

		if (tree->left)
			a = a + binary_tree_leaves(tree->left);
		if (tree->right)
			a = a + binary_tree_leaves(tree->right);
		if (tree->left == NULL && tree->right == NULL)
			return (a + 1);
		if (tree->parent == NULL && tree->left == NULL && tree->right)
			return (1);
		return (a);
	}
	return (0);
}
