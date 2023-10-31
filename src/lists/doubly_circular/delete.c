/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:55:00 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:32:21 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/data_structures/cdll.h"

void	cdll_remove_first(t_n2 **list)
{
	t_n2	*aux;

	if (cdll_is_empty(*list))
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

void	cdll_remove(t_n2 **list, t_n2 *item)
{
	if (cdll_is_empty(*list))
		return ;
	if (cdll_size(*list) == 1)
	{
		free(*list);
		*list = NULL;
		return ;
	}
	item->prev->next = item->next;
	item->next->prev = item->prev;
	item->next = NULL;
	item->prev = NULL;
	free(item);
}

void	cdll_remove_last(t_n2 **list)
{
	t_n2	*aux;

	if (cdll_is_empty(*list))
		return ;
	aux = (*list)->prev;
	(*list)->prev = aux->prev;
	aux->prev->next = *list;
	aux->next = NULL;
	aux->prev = NULL;
	free(aux);
}

void	cdll_purge(t_n2 **list, void *data)
{
	t_n2	*aux;

	if (cdll_is_empty(*list))
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

void	cdll_clear(t_n2 **list)
{
	t_n2	*aux;

	if (cdll_is_empty(*list))
		return ;
	while (*list)
	{
		aux = *list;
		*list = (*list)->next;
		free(aux);
	}
}
