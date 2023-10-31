/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:40:08 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/queue.h"

int	que_is_empty(t_n1 *queue)
{
	return (queue == NULL);
}

int	que_size(t_n1 *queue)
{
	int	i;

	i = 0;
	while (queue)
	{
		queue = queue->next;
		i++;
	}
	return (i);
}

t_n1	*que_first(t_n1 *queue)
{
	return (queue);
}

t_n1	*que_last(t_n1 *queue)
{
	while (queue && queue->next)
		queue = queue->next;
	return (queue);
}
