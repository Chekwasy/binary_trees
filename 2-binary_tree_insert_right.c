#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: the value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	if (parent == NULL)
		return (NULL);
	root = binary_tree_node(parent, value);
	if (root == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = root;
	}
	else
	{
		root->right = parent->right;
		parent->right->parent = root;
		parent->right = root;
	}
	return (root);
}
