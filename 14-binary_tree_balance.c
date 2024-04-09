/*
 * File: 14-binary_tree_balance.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * binary_height - height of the each branch
 * @tree: is a pointer to the node
 *
 * Return: height
 */
int binary_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left += 1 + binary_height(tree->left);
	else
		left = 1;

	if (tree->right)
		right += 1 + binary_height(tree->right);
	else
		right = 1;

	return (left > right ? left : right);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to
 * measure the balance factor
 *
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_height(tree->left) - binary_height(tree->right));
}
