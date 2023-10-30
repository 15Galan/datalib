/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 17:07:25 by antgalan         ###   ########.fr       */
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
 * @param item	The new item to be added.
 */
void	dll_add_first(t_n2 **list, t_n2 *item)
{
	t_n2	*first;

	if (!item)
		return ;
	if (dll_is_empty(*list))
		*list = item;
	else
	{
		first = dll_first(*list);
		first->prev = item;
		item->next = first;
		item->prev = NULL;
		*list = item;
	}
}

/**
 * @brief   Adds a new item before the given item.
 *
 * @param list	The first item of the list.
 * @param data  The data to be stored in the item.
 */
void	dll_add_before(t_n2 *item, t_n2 *new)
{
	if (!item || !new)
		return ;
	new->next = item;
	new->prev = item->prev;
	if (item->prev)
		item->prev->next = new;
	item->prev = new;
}

/**
 * @brief   Adds a new item after the given item.
 *
 * @param list		The first item of the list.
 * @param new_item	The new item to be added.
 */
void	dll_add_after(t_n2 *item, t_n2 *new_item)
{
	if (!item || !new_item)
		return ;
	new_item->next = item->next;
	new_item->prev = item;
	if (item->next)
		item->next->prev = new_item;
	item->next = new_item;
}

/**
 * @brief   Adds a new item at the end of the list.
 *
 * @param list	The first item of the list.
 * @param item	The new item to be added.
 */
void	dll_add_last(t_n2 **list, t_n2 *item)
{
	t_n2	*last;

	if (!item)
		return ;
	if (dll_is_empty(*list))
		*list = item;
	else
	{
		last = dll_last(*list);
		last->next = item;
		item->prev = last;
		item->next = NULL;
	}
}
