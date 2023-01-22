/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_stats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 01:18:42 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/22 13:41:02 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Checks if the list is empty.
 * 
 * @param list	Pointer to the first element of the list.
 * 
 * @return 	1 if the list is empty;
 *          0 otherwise.
 */
int	lst_empty(t_list *list)
{
	return (list == NULL);
}

/**
 * @brief   Counts the number of elements in the list. 
 * 
 * @param list	Pointer to the first element of the list.
 * 
 * @return  The number of elements in the list.
 */
int	lst_size(t_list *list)
{
	int	size;

	size = 0;
	while (list)
	{
		size++;
		list = list->next;
	}
	return (size);
}

/**
 * @brief   Returns the first element of the list.
 * 
 * @param list	Pointer to the first element of the list.
 * 
 * @return  Pointer to the first element of the list.
 */
t_list	*lst_first(t_list *list)
{
	return (list);
}

/**
 * @brief   Returns the last element of the list.
 * 
 * @param list	Pointer to the first element of the list.
 */
t_list	*lst_last(t_list *list)
{
	if (!lst_empty(list))
	{
		while (list->next)
			list = list->next;
	}
	return (list);
}

/**
 * @brief   Searches for an element in the list. 
 * 
 * @param list	Pointer to the first element of the list.
 * @param data  The data to be searched.
 * 
 * @return  Pointer to the element if found;
 *          NULL otherwise.
 */
t_list	*lst_search(t_list *list, void *data)
{
	while (list)
	{
		if (list->data == data)
			return (list);
		list = list->next;
	}
	return (NULL);
}
