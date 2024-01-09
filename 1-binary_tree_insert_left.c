#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: value to store in the new node
 *Return: NULL or nodo
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	if (parent == NULL)
		return (NULL);

	nodo = malloc(sizeof(binary_tree_t));

	if (!nodo)
		return (NULL);

	nodo->left = parent->left;
	parent->left = nodo;
	nodo->parent = parent;
	nodo->n = value;
	nodo->right = NULL;

	if (nodo->left)
		nodo->left->parent = nodo;
	return (nodo);
}
