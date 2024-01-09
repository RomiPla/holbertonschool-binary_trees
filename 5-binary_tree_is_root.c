#include "binary_trees.h"
/**
 * binary_tree_is_root- check if the node is the root
 * @node: is a node
 * Return: return one if the function have succes.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if (node->parent == NULL)
	{
		return (1);
	}
	else
		return (0);
}