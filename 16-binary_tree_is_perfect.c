/*
 * File: 16-binary_tree_is_perfect.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * perfect_aux - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 tree is perfectf, else 0, if tree is NULL, return 0
 */
int perfect_aux(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		left += 1 + perfect_aux(tree->left);
		right += 1 + perfect_aux(tree->right);
		return (left == right ? left : 0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}

/*
 * File: 16-binary_tree_is_perfect.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 tree is perfectf, else 0, if tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (perfect_aux(tree) ? 1 : 0);
}
