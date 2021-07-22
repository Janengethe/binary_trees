#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: depth of binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i;

	if (tree == NULL)
	{
		return (0);
	}

	for (i = 0; tree && tree->parent; i++)
	{
		tree = tree->parent;
	}
	return (i);
}
