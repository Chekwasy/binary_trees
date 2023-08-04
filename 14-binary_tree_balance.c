#include <stdlib.h>
#include "binary_trees.h"
int height_left(const binary_tree_t *tree);
int height_right(const binary_tree_t *tree);
/**
 * binary_tree_balance - a function that measures the
 * balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (height_left(tree) -
			height_right(tree));
	}
	return (0);
}
/**
 * height_left - left counter
 * @tree: a pointer to the tree
 * Return: 0 or total left
 */
int height_left(const binary_tree_t *tree)
{
	if (tree)
	{
		int a = 0;

		if (tree->left)
			a = 1 + height_left(tree->left);
		return (a);
	}
	return (0);
}
/**
 * height_right - right counter
 * @tree: a pointer to the tree
 * Return: 0 or total right
 */
int height_right(const binary_tree_t *tree)
{
	if (tree)
	{
		int a = 0;

		if (tree->right)
			a = 1 + height_right(tree->right);
		return (a);
	}
	return (0);
}
