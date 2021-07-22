#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count no. of nodes
 * Return: no. of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lleaf, rleaf;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	lleaf = binary_tree_nodes(tree->left);
	rleaf = binary_tree_nodes(tree->right);
	return (lleaf + rleaf + 1);
}
