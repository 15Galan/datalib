/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 16:48:44 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dll.h"

/**
 * @brief   Removes the first item of the list.
 *
 * @param list	The first item of the list.
 */
void	dll_remove_first(t_n2 **list)
{
	t_n2	*aux;

	if (dll_is_empty(*list))
		return ;
	aux = *list;
	*list = (*list)->next;
	if (*list)
		(*list)->prev = NULL;
	free(aux);
}

/**
 * @brief   Removes the given item from the list.
 *
 * @param list	The first item of the list.
 * @param item	The item to be removed.
 */
void	dll_remove(t_n2 **list, t_n2 *item)
{
	if (dll_is_empty(*list))
		return ;
	if (item->prev)
		item->prev->next = item->next;
	else
		*list = item->next;
	if (item->next)
		item->next->prev = item->prev;
	free(item);
}

/**
 * @brief   Removes the last item of the list.
 *
 * @param list	The first item of the list.
 */
void	dll_remove_last(t_n2 **list)
{
	t_n2	*aux;

	if (dll_is_empty(*list))
		return ;
	aux = *list;
	while (aux->next)
		aux = aux->next;
	if (aux->prev)
		aux->prev->next = NULL;
	else
		*list = NULL;
	free(aux);
}

/**
 * @brief	Removes all the items with the given data.
 *
 * @param list	The first item of the list.
 * @param data	The data to be removed.
 */
void	dll_purge(t_n2 **list, void *data)
{
	t_n2	*aux;

	if (dll_is_empty(*list))
		return ;
	aux = *list;
	while (aux)
	{
		if (aux->data == data)
			dll_remove(list, aux);
		aux = aux->next;
	}
}

/**
 * @brief   Removes all the items of the list.
 *
 * @param list	The first item of the list.
 */
void	dll_clear(t_n2 **list)
{
	t_n2	*aux;

	if (dll_is_empty(*list))
		return ;
	while (*list)
	{
		aux = *list;
		*list = (*list)->next;
		free(aux);
	}
}
