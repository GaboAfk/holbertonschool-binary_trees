/*
 * File: 14-binary_tree_balance.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the balance factor
 *
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return (0);

	if (tree->left)
		count += 1 + binary_tree_balance(tree->left);

	if (tree->right)
		count -= 1 + binary_tree_balance(tree->right);

	return (count);
}
