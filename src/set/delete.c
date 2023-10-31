/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:20:43 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:42:21 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/set.h"

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
