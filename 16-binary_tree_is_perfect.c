#include "binary_trees.h"

/**
 * depth - Calculates the depth of a binary tree.
 * @node: A pointer to the node of the tree.
 *
 * Return: The depth of the tree.
 */
int depth(const binary_tree_t *node)
{
	int depth = 0;

	while (node != NULL)
	{
		depth = depth + 1;
		node = node->left;
	}
	return (depth);
}

/**
 * check_if_perfect - Checks if a binary tree is perfect.
 * @node: A pointer to the node of the tree.
 * @depth: The depth of the tree.
 * @current_level: The current level of the node.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int check_if_perfect(const binary_tree_t *node, int depth, int current_level)
{
	int left_subtree;
	int right_subtree;

	if (node == NULL)
	{
		return (1);
	}

	if (node->left == NULL && node->right == NULL)
	{
		if (depth == current_level + 1)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	if (node->left == NULL || node->right == NULL)
	{
		return (0);
	}

	left_subtree = check_if_perfect(node->left, depth, current_level + 1);
	right_subtree = check_if_perfect(node->right, depth, current_level + 1);

	if (left_subtree == 1 && right_subtree == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tree_depth = depth(tree);

	return (check_if_perfect(tree, tree_depth, 0));
}
