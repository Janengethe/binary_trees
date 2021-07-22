#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not/failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (compare_branches(tree) == 0)
		return (0);
	return (1);
}

/**
 * compare_branches - checks if brances of a root are equal
 * @tree: tree/subtree to be checked
 * Return: length of nodes, or 0 if failure
 */
int compare_branches(const binary_tree_t *tree)
{
	int cleft, cright;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL)
	{
		if (tree->left == NULL)
			return (1);
		return (0);
	}
	if (tree->left == NULL)
		return (0);

	cleft = compare_branches(tree->left);
	cright = compare_branches(tree->right);
	if (cleft == cright)
		return (cleft + 1);
	return (0);
}
