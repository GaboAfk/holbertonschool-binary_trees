/*
 * File: 11-binary_tree_size.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left = tree->left ? binary_tree_size(tree->left) : 0;
	right = tree->right ? binary_tree_size(tree->right) : 0;

	return (1 + left + right);
}
