/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 13:17:36 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dll.h"

/**
 * @brief   Creates a new item with the given data.
 *
 * @param data  The data to be stored in the item.
 *
 * @return  The new item.
 */
t_n2	*dll_new(void *data)
{
	t_n2	*new;

	new = (t_n2 *) malloc(sizeof(t_n2));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

/**
 * @brief   Adds a new item at the beginning of the list.
 *
 * @param list	The first item of the list.
 * @param node	The new item to be added.
 */
void	dll_add_first(t_n2 **list, t_n2 *node)
{
	if (dll_empty(*list))
		*list = node;
	else
	{
		node->next = *list;
		(*list)->prev = node;
		*list = node;
	}
}

/**
 * @brief   Adds a new item after the given item.
 *
 * @param list	The first item of the list.
 * @param data  The data to be stored in the item.
 */
void	dll_add_after(t_n2 *node, t_n2 *new)
{
	if (dll_empty(node) || dll_empty(new))
		return ;
	new->next = node->next;
	new->prev = node;
	if (node->next)
		node->next->prev = new;
	node->next = new;
}

/**
 * @brief   Adds a new item at the end of the list.
 *
 * @param list	The first item of the list.
 * @param node	The new item to be added.
 */
void	dll_add_last(t_n2 **list, t_n2 *node)
{
	t_n2	*last;

	if (dll_empty(*list))
		*list = node;
	else
	{
		last = dll_last(*list);
		last->next = node;
		node->prev = last;
	}
}
