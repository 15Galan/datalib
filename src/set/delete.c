/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:20:43 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 20:43:16 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/set.h"

/**
 * @brief	Removes the given data from the set.
 * 
 * @param set	The first element of the set.
 * @param data	The data to remove.
 */
void	set_remove(t_n1 **set, void *data)
{
	t_n1	*aux;
	t_n1	*prev;

	if (!set_contains(*set, data))
		return ;
	aux = *set;
	prev = NULL;
	while (aux)
	{
		if (aux->data == data)
		{
			if (prev)
				prev->next = aux->next;
			else
				*set = aux->next;
			free(aux);
			return ;
		}
		prev = aux;
		aux = aux->next;
	}
}

/**
 * @brief	Removes all the elements of the set.
 * 
 * @param set	The first element of the set.
 */
void	set_clear(t_n1 **set)
{
	t_n1	*aux;

	if (set_is_empty(*set))
		return ;
	while (*set)
	{
		aux = *set;
		*set = (*set)->next;
		free(aux);
	}
}
