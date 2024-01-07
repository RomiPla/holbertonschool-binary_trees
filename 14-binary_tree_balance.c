#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Como El factor de equilibrio de un árbol binario se define
 * como la diferencia entre las alturas del subárbol izquierdo
 * y el subárbol derecho hice una funcion extra para las alturas.
 *
 * Return: The height of the tree. If tree is NULL, return -1.
 */
int binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;
	int max_height;

	if (tree == NULL)
	{
		return (-1);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		max_height = left_height;
	}
	else
	{
		max_height = right_height;
	}

	return (1 + max_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor of the tree. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
