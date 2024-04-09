/*
 * File: 15-binary_tree_is_full.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root node of
 * the tree to check
 *
 * Return: tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_is_full(tree->left);

	else
		return (0);

	if (tree->right)
		right = 1 + binary_tree_is_full(tree->right);

	else
		return (0);

	if (left == right)
		return (1);

	else
		return (0);
}
