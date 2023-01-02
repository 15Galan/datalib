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

#include "Libft/libft.h"
#include "datalib/datalib.h"

/**
 * @brief	Deletes the first element of the list.
 * 
 * @param list	Pointer to the first element of the list.
 */
void	ll_remove_first(t_list *list)
{
	t_list	*aux;

	if (!ll_is_empty(list))
	{
		aux = list->next;
		free(ll_first(list));
		list = aux;
	}
}

/**
 * @brief	Deletes the element from the list.
 * 
 * @param list 	Pointer to the first element of the list.
 * @param elem 	Pointer to the element to be deleted.
 */
void	ll_remove(t_list *list, t_list *elem)
{
	t_list	*aux;

	if (!ll_is_empty(list))
	{
		aux = list;
		while (aux->next != elem)
			aux = aux->next;
		aux->next = elem->next;
		free(elem);
	}
}

/**
 * @brief	Deletes the last element of the list.
 * 
 * @param list 	Pointer to the first element of the list.
 */
void	ll_remove_last(t_list *list)
{
	t_list	*aux;

	if (!ll_is_empty(list))
		free(ll_last(list));
}

/**
 * @brief 	Deletes all elements of the list with the given data.
 * 
 * @param list 	Pointer to the first element of the list.
 * @param data 	Data to be deleted.
 * 
 * @return	Number of elements deleted.
 */
int	ll_purge(t_list *list, void *data)
{
	t_list	*aux1;
	t_list	*aux2;
	int		count;

	if (!ll_is_empty(list))
		return (0);
	aux1 = list;
	count = 0;
	while (aux1->next != NULL)
	{
		if (aux1->next->data == data)
		{
			aux2 = aux1->next;
			aux1->next = aux1->next->next;
			free(aux2);
			count++;
		}
		aux1 = aux1->next;
	}
	return (count);
}

/**
 * @brief	Deletes all elements of the list.
 * 
 * @param list 	Pointer to the first element of the list.
 */
void	ll_clear(t_list *list)
{
	t_list	*aux;

	if (!ll_is_empty(list))
		return ;
	aux = list;
	while (aux->next != NULL)
	{
		aux = aux->next;
		free(aux);
	}
}
