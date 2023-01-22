/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_deleters.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 00:58:54 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/22 12:48:02 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Deletes the first element of the list.
 * 
 * @param list	Pointer to the first element of the list.
 */
void	lst_remove_first(t_list **list)
{
	t_list	*aux;

	if (list && *list)
	{
		aux = (*list)->next;
		free(*list);
		*list = aux;
	}
}

/**
 * @brief	Deletes the element from the list.
 * 
 * @param list 	Pointer to the first element of the list.
 * @param elem 	Pointer to the element to be deleted.
 */
void	lst_remove(t_list **list, t_list *elem)
{
	t_list	*aux;

	if (list && *list && elem)
	{
		if (*list == elem)
			lst_remove_first(list);
		else
		{
			aux = *list;
			while (aux->next && aux->next != elem)
				aux = aux->next;
			if (aux->next)
			{
				aux->next = elem->next;
				free(elem);
			}
		}
	}
}

/**
 * @brief	Deletes the last element of the list.
 * 
 * @param list 	Pointer to the first element of the list.
 */
void	lst_remove_last(t_list **list)
{
	t_list	*aux;

	if (list && *list)
	{
		if ((*list)->next == NULL)
			lst_remove_first(list);
		else
		{
			aux = *list;
			while (aux->next->next)
				aux = aux->next;
			free(aux->next);
			aux->next = NULL;
		}
	}
}

/**
 * @brief 	Deletes all elements of the list with the given data.
 * 
 * @param list 	Pointer to the first element of the list.
 * @param data 	Data to be deleted.
 * 
 * @return	Number of elements deleted.
 */
int	lst_purge(t_list **list, void *data)
{
	t_list	*aux;
	int		count;

	count = 0;
	if (list && *list)
	{
		while (*list)
		{
			if ((*list)->content == data)
			{
				aux = (*list)->next;
				free(*list);
				*list = aux;
				count++;
			}
			else
				list = &(*list)->next;
		}
	}
	return (count);
}

/**
 * @brief	Deletes all elements of the list.
 * 
 * @param list 	Pointer to the first element of the list.
 */
void	lst_clear(t_list **list)
{
	t_list	*aux;

	if (list && *list)
	{
		while (*list)
		{
			aux = (*list)->next;
			free(*list);
			*list = aux;
		}
	}
}
