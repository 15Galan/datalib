/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:12:03 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 20:41:52 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/data_structures/cdll.h"

/**
 * @brief   Creates a new item with the given data.
 *
 * @param data  The data to be stored in the item.
 *
 * @return  The new item.
 */
t_n2	*cdll_new(void *data)
{
	t_n2	*new;

	new = (t_n2 *) malloc(sizeof(t_n2));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = new;
	new->prev = new;
	return (new);
}

/**
 * @brief   Adds a new item at the beginning of the list.
 *
 * @param list	The first item of the list.
 * @param item	The new item to be added.
 */
void	cdll_add_first(t_n2 **list, t_n2 *item)
{
	if (!item)
		return ;
	if (cdll_is_empty(*list))
		*list = item;
	else
	{
		item->next = *list;
		item->prev = (*list)->prev;
		(*list)->prev->next = item;
		(*list)->prev = item;
		*list = item;
	}
}

/**
 * @brief   Adds a new item before the given item.
 *
 * @param list		The first item of the list.
 * @param new_item  The new item to be added.
 */
void	cdll_add_before(t_n2 *item, t_n2 *new_item)
{
	if (!item || !new_item)
		return ;
	new_item->next = item;
	new_item->prev = item->prev;
	item->prev->next = new_item;
	item->prev = new_item;
}

/**
 * @brief   Adds a new item after the given item.
 *
 * @param list		The first item of the list.
 * @param new_item  The new item to be added.
 */
void	cdll_add_after(t_n2 *item, t_n2 *new_item)
{
	if (!item || !new_item)
		return ;
	new_item->next = item->next;
	new_item->prev = item;
	item->next->prev = new_item;
	item->next = new_item;
}

/**
 * @brief   Adds a new item at the end of the list.
 *
 * @param list	The first item of the list.
 * @param item	The new item to be added.
 */
void	cdll_add_last(t_n2 **list, t_n2 *item)
{
	if (cdll_is_empty(*list))
		*list = item;
	else
	{
		item->next = *list;
		item->prev = (*list)->prev;
		(*list)->prev->next = item;
		(*list)->prev = item;
	}
}
