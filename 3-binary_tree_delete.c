#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_delete - borra un arbol binario
 *@tree: puntero al root node del arbol a borrar
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);

	binary_tree_delete(tree->right);

	free(tree);
}
