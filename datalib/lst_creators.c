/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_creators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:00 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/22 12:48:36 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Creates a new element for the list.
 * 
 * @param data 	The data to be stored in the new element.
 * 
 * @return 	Pointer to the new element.
 */
t_list	*lst_new(void *data)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = data;
	new->next = NULL;
	return (new);
}

/**
 * @brief	Adds a new element to the beginning of the list.
 * 
 * @param lst 	Pointer to the first element of the list.
 * @param new 	Pointer to the new element to be added.
 */
void	lst_add_first(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/**
 * @brief	Adds a new element to the list in the given position.
 * 
 * @param elem	Pointer to the element after which the new element will be added.
 * @param new 	Pointer to the new element to be added.
 */
void	lst_add_after(t_list *elem, t_list *new)
{
	if (new && elem)
	{
		new->next = elem->next;
		elem->next = new;
	}
}

/**
 * @brief	Adds a new element to the end of the list.
 * 
 * @param lst 	Pointer to the first element of the list.
 * @param new 	Pointer to the new element to be added.
 */
void	lst_add_last(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			last = lst_last(*lst);
			last->next = new;
		}
	}
}
