/*
 * File: 9-binary_tree_height.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left += 1 + binary_tree_height(tree->left);

	if (tree->right)
		right += 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	else
		return (right);
}
