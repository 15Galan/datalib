/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 19:59:26 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/data structures/dll.h"

/**
 * @brief	Checks if the list is empty.
 *
 * @param list	The first item of the list.
 *
 * @return	1 if the list is empty;
 * 			0 otherwise.
 */
int	dll_is_empty(t_n2 *list)
{
	return (list == NULL);
}

/**
 * @brief   Counts the number of items in the list.
 *
 * @param list   The first item of the list.
 *
 * @return  Number of items in the list.
 */
int	dll_size(t_n2 *list)
{
	int	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

/**
 * @brief   Gets the first item of the list.
 *
 * @param list	Any item of the list.
 *
 * @return	The first item of the list.
 */
t_n2	*dll_first(t_n2 *list)
{
	while (list && list->prev)
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
t_n2	*dll_last(t_n2 *list)
{
	while (list && list->next)
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
t_n2	*dll_search(t_n2 *list, void *data)
{
	while (list)
	{
		if (list->data == data)
			return (list);
		list = list->next;
	}
	return (NULL);
}
