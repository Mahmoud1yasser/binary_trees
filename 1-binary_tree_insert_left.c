#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node.
 * Return:  a pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;
	binary_tree_t *temp;
	
	left_node = malloc(sizeof(binary_tree_t));
	temp = malloc(sizeof(binary_tree_t));
	if (left_node == NULL || temp == NULL)
		return (NULL);
	left_node->n = value;
	if (parent->left != NULL)
		temp = parent->left;
	else
		temp = NULL;
	left_node->parent = parent;
	left_node->left = temp;
	left_node->right = NULL;
	return (left_node);
}
