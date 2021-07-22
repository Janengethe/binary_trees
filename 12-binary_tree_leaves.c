#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree
 * to count the number of leaves
 * Return: no. of leaves in binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lleaf, rleaf;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		lleaf = binary_tree_leaves(tree->left);
		rleaf = binary_tree_leaves(tree->right);
		return (lleaf + rleaf);
	}
}
