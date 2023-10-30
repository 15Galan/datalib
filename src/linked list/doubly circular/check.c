/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:28:07 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 17:15:34 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cdll.h"

/**
 * @brief	Checks if the list is empty.
 *
 * @param list	The first element of the list.
 *
 * @return	1 if the list is empty;
 * 			0 otherwise.
 */
int	cdll_is_empty(t_n2 *list)
{
	return (list == NULL);
}

/**
 * @brief   Counts the number of items in the list.
 *
 * @param list   The first element of the list.
 *
 * @return  Number of items in the list.
 */
int	cdll_size(t_n2 *list)
{
	int	i;

	i = 0;
	if (cdll_is_empty(list))
		return (0);
	while (list->next && list->next != list)
	{
		list = list->next;
		i++;
	}
	return (i + 1);
}

/**
 * @brief   Gets the first item of the list.
 *
 * @param list	Any item of the list.
 *
 * @return	The first item of the list.
 */
t_n2	*cdll_first(t_n2 *list)
{
	while (list->prev)
		list = list->prev;
	return (list);
}

/**
 * @brief   Gets the last item of the list.
 *
 * @param list	Any item of the list.
 *
 * @return	The last item of the list.
 */
t_n2	*cdll_last(t_n2 *list)
{
	while (list->next && list->next != list)
		list = list->next;
	return (list);
}

/**
 * @brief	Searches an item in the list.
 *
 * @param list	The first item of the list.
 * @param data	The data to search.
 *
 * @return	The item containing the data;
 * 			NULL if the data is not found.
 */
t_n2	*cdll_search(t_n2 *list, void *data)
{
	while (list && list->next != list)
	{
		if (list->data == data)
			return (list);
		list = list->next;
	}
	return (NULL);
}
