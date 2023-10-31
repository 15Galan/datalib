/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:56:24 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:39:38 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/queue.h"

void	*que_dequeue(t_n1 **queue)
{
	t_n1	*aux;
	void	*data;

	if (que_is_empty(*queue))
		return (NULL);
	aux = *queue;
	*queue = (*queue)->next;
	data = aux->data;
	free(aux);
	return (data);
}

void	que_clear(t_n1 **queue)
{
	while (!que_is_empty(*queue))
		que_dequeue(queue);
}
