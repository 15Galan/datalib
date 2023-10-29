/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll_deleters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:55:00 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/29 12:12:44 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Removes the first node of the list.
 * 
 * @param list	Pointer to the first element of the list.
 */
void	cdll_remove_first(t_cdll **list)
{
	t_cdll	*aux;

	if (cdll_empty(*list))
		return ;
	aux = *list;
	*list = (*list)->next;
	if (*list)
	{
		(*list)->prev = aux->prev;
		aux->prev->next = *list;
	}
	else
		aux->prev->next = NULL;
	aux->next = NULL;
	aux->prev = NULL;
	free (aux);
}

/**
 * @brief	Removes the given node from the list.
 * 
 * @param list	Pointer to the first element of the list.
 * @param elem	Pointer to the element to be removed.
 */
void	cdll_remove(t_cdll **list, t_cdll *elem)
{
	if (cdll_empty(*list))
		return ;
	if (cdll_size(*list) == 1)
	{
		free(*list);
		*list = NULL;
		return ;
	}
	elem->prev->next = elem->next;
	elem->next->prev = elem->prev;
	elem->next = NULL;
	elem->prev = NULL;
	free(elem);
}

/**
 * @brief	Removes the last node of the list.
 * 
 * @param list	Pointer to the first element of the list.
 */
void	cdll_remove_last(t_cdll **list)
{
	t_cdll	*aux;

	if (cdll_empty(*list))
		return ;
	aux = (*list)->prev;
	(*list)->prev = aux->prev;
	aux->prev->next = *list;
	aux->next = NULL;
	aux->prev = NULL;
	free(aux);
}

/**
 * @brief	Removes the given node from the list and frees it.
 * 
 * @param list	Pointer to the first element of the list.
 * @param data	Pointer to the data to be removed.
 */
void	cdll_purge(t_cdll **list, void *data)
{
	t_cdll	*aux;

	if (cdll_empty(*list))
		return ;
	aux = *list;
	while (aux)
	{
		if (aux->data == data)
		{
			cdll_remove(list, aux);
			return ;
		}
		aux = aux->next;
	}
}

/**
 * @brief	Removes all the nodes from the list and frees them.
 * 
 * @param list	Pointer to the first element of the list.
 */
void	cdll_clear(t_cdll **list)
{
	t_cdll	*aux;

	if (cdll_empty(*list))
		return ;
	while (*list)
	{
		aux = *list;
		*list = (*list)->next;
		free(aux);
	}
}
