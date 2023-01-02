/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 01:29:12 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/02 01:32:44 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include "datalib/datalib.h"

/**
 * @brief	Adds a new element to the end of the list.
 * 
 * @param lst 	Pointer to the first element of the list.
 * @param new 	Pointer to the new element to be added.
 */
void	ll_add_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			last = ll_last(*lst);
			last->next = new;
		}
	}
}
