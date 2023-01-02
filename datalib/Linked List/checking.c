/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 01:18:42 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/02 01:25:34 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "datalib/datalib.h"

/**
 * @brief	Checks if the list is empty.
 * 
 * @param lst 	Pointer to the first element of the list.
 * 
 * @return 	1 if the list is empty;
 *          0 otherwise.
 */
int	ll_is_empty(t_list *lst)
{
	return (lst == NULL);
}

/**
 * @brief   Counts the number of elements in the list. 
 * 
 * @param lst   Pointer to the first element of the list.
 * 
 * @return  The number of elements in the list.
 */
int	ll_size(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/**
 * @brief   Returns the first element of the list.
 * 
 * @param lst   Pointer to the first element of the list.
 * 
 * @return  Pointer to the first element of the list.
 */
t_list	*ll_first(t_list *lst)
{
	return (lst);
}

/**
 * @brief   Returns the last element of the list.
 * 
 * @param lst   Pointer to the first element of the list.
 */
t_list	*ll_last(t_list *lst)
{
	if (!ll_is_empty(lst))
	{
		while (lst->next)
			lst = lst->next;
	}
	return (lst);
}

/**
 * @brief   Searches for an element in the list. 
 * 
 * @param lst   Pointer to the first element of the list.
 * @param data  The data to be searched.
 * 
 * @return  Pointer to the element if found;
 *          NULL otherwise.
 */
t_list	*ll_search(t_list *lst, void *data)
{
	while (lst)
	{
		if (lst->data == data)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
