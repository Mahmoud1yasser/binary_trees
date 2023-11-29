#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the left-child of another node.
 * @parent: is a pointer to the node to insert the left-child in.
 * @value: the value to put in the new node.
 * Return:  a pointer to the new node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);
	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);
	right_node->n = value;
	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right->parent = right_node;
		parent->right = right_node;
	}
	else
	{
		right_node->right = NULL;
		parent->right = right_node;
	}
	right_node->parent = parent;
	right_node->left = NULL;
	return (right_node);
}
