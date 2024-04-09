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
	if (!tree)
		return (0);

	if (tree->left && tree->right && tree->parent)
		return (1);

	else
		return (0);
}