#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current_node;

	if (tree == NULL)
	{
		return (depth);
	}

	current_node = tree;

	while (current_node->parent != NULL)
	{
		depth++;
		current_node = current_node->parent;
	}
	return (depth);
}
