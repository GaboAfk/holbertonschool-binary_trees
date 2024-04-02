/*
 * File: 13-binary_tree_nodes.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes
 *							with at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to count the number of nodes.
 * Return: Nodes with at least 1 child. 0 if NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left ^ !tree->right)
		return (1);

	/*se debe de tomar en cuenta si un hijo solo tiene hijos a ese lado*/
	/*return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));*/
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
