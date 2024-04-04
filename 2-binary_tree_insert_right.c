/*
 * File: 2-binary_tree_insert_right.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * binary_tree_t - inserts a node as the right-child of another node
 *
 * Return: a pointer to the created node,
 *		or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	if (parent->right == NULL)
		parent->right = node;
	else
	{
	node->right = parent->right;
	parent->right = node;
	node->right->parent = node;
	}

	return (node);
}
