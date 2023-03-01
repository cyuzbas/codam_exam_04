/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   binary_insert.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cyuzbas <cyuzbas@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/24 15:09:28 by cyuzbas       #+#    #+#                 */
/*   Updated: 2023/02/24 15:20:06 by cyuzbas       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

int search(t_btree* head, int value)
{
	if (!head)
		return (1);
	if (head->value == value)
		return (1);
	if (head->right && search(head->right, value))
		return (1);
	if (head->left && search(head->left, value))
		return (1);
	return (0);
}

t_btree* insert(t_btree *node, int value)
{
	if (value > node->value)
	{
		if (!node->right)
		{
			t_btree *new = malloc(sizeof(t_btree));
			new->value = value;
			node->right = new;
			return (node);
		}
		return (insert(node->right, value)); 
	}
	if (value < node->value)
	{
		if (!node->left)
		{
			t_btree *new = malloc(sizeof(t_btree));
			new->value = value;
			node->left = new;
			return (node);
		}
		return (insert(node->left, value));
	}
	return (NULL);
}

t_btree* insert_binary_tree(t_btree *root, int value)
{
	t_btree *new = malloc(sizeof(t_btree));
	new = NULL;
	if(root == NULL)
		return new;
	new = root;
	if (!(search(root, value)))
		new = insert(new, value);
	return new;
}
