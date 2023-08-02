#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: the value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *root;

	if (parent == NULL)
		return (NULL);
	root = binary_tree_node(parent, value);
	if (root == NULL)
		return (NULL);

	root->n = value;
	root->left = NULL;
	root->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = root;
		return (root);
	}
	else
	{
		root->left = parent->left;
		parent->left->parent = root;
	}
	return (root);
}
