/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll_stats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:28:07 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/29 11:57:41 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Checks if the list is empty.
 *
 * @param list	Pointer to the first element of the list.
 *
 * @return	1 if the list is empty;
 * 			0 otherwise.
 */
int	cdll_empty(t_cdll *list)
{
	return (list == NULL);
}

/**
 * @brief   Counts the number of nodes in the list.
 *
 * @param list   Pointer to the first element of the list.
 *
 * @return  Number of nodes in the list.
 */
int	cdll_size(t_cdll *list)
{
	int	i;

	i = 0;
	if (cdll_empty(list))
		return (0);
	while (list->next && list->next != list)
	{
		list = list->next;
		i++;
	}
	return (i + 1);
}

/**
 * @brief   Returns the first node of the list.
 *
 * @param list	Pointer to an element of the list.
 *
 * @return	Pointer to the first node of the list.
 */
t_cdll	*cdll_first(t_cdll *list)
{
	if (cdll_empty(list))
		return (NULL);
	while (list->prev)
		list = list->prev;
	return (list);
}

/**
 * @brief   Returns the last node of the list.
 *
 * @param list	Pointer to an element of the list.
 *
 * @return	Pointer to the last node of the list.
 */
t_cdll	*cdll_last(t_cdll *list)
{
	if (cdll_empty(list))
		return (NULL);
	while (list->next && list->next != list)
		list = list->next;
	return (list);
}

/**
 * @brief   Returns the nth node of the list.
 *
 * @param list	Pointer to the first element of the list.
 * @param data	The data to search.
 *
 * @return	Pointer to the nth node of the list.
 */
t_cdll	*cdll_search(t_cdll *list, void *data)
{
	while (list && list->next != list)
	{
		if (list->data == data)
			return (list);
		list = list->next;
	}
	return (NULL);
}
