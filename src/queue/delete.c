/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:56:24 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 18:00:10 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

/**
 * @brief   Removes the first node of the queue.
 *
 * @param queue	The first element of the queue.
 * 
 * @return  the data stored in the removed node.
 */
void	*que_dequeue(t_n1 **queue)
{
	t_n1	*aux;
	void	*data;

	if (que_empty(*queue))
		return (NULL);
	aux = *queue;
	*queue = (*queue)->next;
	data = aux->data;
	free(aux);
	return (data);
}

/**
 * @brief   Removes all the nodes of the queue.
 *
 * @param queue	The first element of the queue.
 */
void	que_clear(t_n1 **queue)
{
	while (!que_empty(*queue))
		que_dequeue(queue);
}
