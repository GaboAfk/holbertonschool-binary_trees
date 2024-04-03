/*
 * File: 16-binary_tree_is_perfect.c
 * Auth: Gabriel Morffe and Bryan Aleman
 */
#include "binary_trees.h"

/**
 * perfect_aux - Function that checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if is perfect. 0 otherwise or @tree is NULL.
 */
int perfect_aux(const binary_tree_t *tree, int lvl)
{
	int perfect_left, perfect_right;

	if (!tree)
		return (0);

	perfect_left = tree->left ? 1 + perfect_aux(tree->left, lvl + 1) : 0;
	perfect_right = tree->right ? 1 + perfect_aux(tree->right, lvl + 1) : 0;

	/*me falta ir comparando el nivel en el que se encuentra cada hijo*/
	/*lvl_left++ o algo así...*/
}

/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if is perfect. 0 otherwise or @tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (perfect_aux(tree, 0));
}
