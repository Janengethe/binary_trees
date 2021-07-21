#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int rows = traverse_rows(tree);

	if (rows == 0)
	{
		return (0);
	}

	return (rows - 1);
}
/**
 * traverse_rows - counts rows of tree
 * @tree: tree to be evaluated
 *
 * Return: rows, or 0 on failure
 */
int traverse_rows(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree == NULL)
	{
		return (0);
	}

	left = traverse_rows(tree->left);
	right = traverse_rows(tree->right);

	if (left > right)
	{
		return (left + 1);
	}

	return (right + 1);
}
