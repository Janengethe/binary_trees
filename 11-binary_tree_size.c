#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to root node of tree to measure size
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lsize, rsize;

	if (tree == NULL)
	{
		return (0);
	}
	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);
	return (lsize + rsize + 1);
}
