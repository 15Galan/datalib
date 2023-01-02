/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deletion.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 00:58:54 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/02 01:49:53 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Deletes the first element of the list.
 * 
 * @param list	Pointer to the first element of the list.
 */
void	ll_remove_first(t_list **list)
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
void	ll_remove(t_list **list, t_list *elem)
{
	t_list	*aux;

	if (list && *list && elem)
	{
		if (*list == elem)
			ll_remove_first(list);
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
void	ll_remove_last(t_list **list)
{
	t_list	*aux;

	if (list && *list)
	{
		if ((*list)->next == NULL)
			ll_remove_first(list);
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
int	ll_purge(t_list **list, void *data)
{
	t_list	*aux;
	int		count;

	count = 0;
	if (list && *list)
	{
		while (*list && (*list)->content == data)
		{
			aux = (*list)->next;
			free(*list);
			*list = aux;
			count++;
		}
		aux = *list;
		while (aux && aux->next)
		{
			if (aux->next->content == data)
			{
				ll_remove(list, aux->next);
				count++;
			}
			else
				aux = aux->next;
		}
	}
	return (count);
}

/**
 * @brief	Deletes all elements of the list.
 * 
 * @param list 	Pointer to the first element of the list.
 */
void	ll_clear(t_list **list)
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
