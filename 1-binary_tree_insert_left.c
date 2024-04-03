/*
 * File: 1-binary_tree_insert_left.c
 * Auth: Gabriel Morffe, Bryan Aleman
 */

#include "binary_trees.h"

/**
 * binary_tree_t  - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;

	}

	return (0);
}
