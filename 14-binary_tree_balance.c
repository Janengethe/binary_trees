#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: a pointer to root node of tree to measure balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bleft, bright;

	if (tree == NULL)
	{
		return (0);
	}
	bleft = traverse_rows(tree->left);
	bright = traverse_rows(tree->right);
	return (bleft - bright);
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
