/*
 * File: 18-binary_tree_uncle.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 *
 * Return: NULL if node is NULL, NULL if
 * node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandfather;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	grandfather = node->parent->parent;

	return (grandfather);
}
