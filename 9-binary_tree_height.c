#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (tree == NULL)
	{
		return (0);
	}
	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	return (_findmax(a, b) + 1);
}

/**
 * _findmax - finds the maximum
 * @a: node to compare
 * @b: node to compare
 * Return: max
 */
int _findmax(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
