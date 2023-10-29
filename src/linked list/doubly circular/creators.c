/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll_creators.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:12:03 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/28 22:59:07 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Allocates memory for a new node and initializes it with the given
 * 			data.
 * 
 * @param data	Data to be stored in the new node.

 * @return	Pointer to the new node.
 */
t_cdll	*cdll_new(void *data)
{
	t_cdll	*new;

	new = (t_cdll *) malloc(sizeof(t_cdll));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = new;
	new->prev = new;
	return (new);
}

/**
 * @brief	Adds a new node to the beginning of the list.
 * 
 * @param list	Pointer to the first element of the list.
 * @param elem	Pointer to the new node.
 */
void	cdll_add_first(t_cdll **list, t_cdll *elem)
{
	if (cdll_empty(*list))
		*list = elem;
	else
	{
		elem->next = *list;
		elem->prev = (*list)->prev;
		(*list)->prev->next = elem;
		(*list)->prev = elem;
		*list = elem;
	}
}

/**
 * @brief	Adds a new node before a given node.
 * 
 * @param elem	Pointer to the node before which the new node will be added.
 * @param new	Pointer to the new node.
 */
void	cdll_add_before(t_cdll *elem, t_cdll *new)
{
	new->next = elem;
	new->prev = elem->prev;
	elem->prev->next = new;
	elem->prev = new;
}

/**
 * @brief	Adds a new node after a given node.
 * 
 * @param elem	Pointer to the node after which the new node will be added.
 * @param new	Pointer to the new node.
 */
void	cdll_add_after(t_cdll *elem, t_cdll *new)
{
	new->next = elem->next;
	new->prev = elem;
	elem->next->prev = new;
	elem->next = new;
}

/**
 * @brief	Adds a new node to the end of the list.
 * 
 * @param list	Pointer to the first element of the list.
 * @param elem	Pointer to the new node.
 */
void	cdll_add_last(t_cdll **list, t_cdll *elem)
{
	if (cdll_empty(*list))
		*list = elem;
	else
	{
		elem->next = *list;
		elem->prev = (*list)->prev;
		(*list)->prev->next = elem;
		(*list)->prev = elem;
	}
}
