/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   que_deleters.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/19 21:12:13 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief   Removes the last node of the queue.
 *
 * @param queue	Pointer to the first element of the queue.
 */
void	qu_dequeue(t_queue **queue)
{
	t_queue	*aux;
	t_queue	*prev;

	if (qu_empty(*queue))
		return ;
	aux = *queue;
	prev = NULL;
	while (aux->next)
	{
		prev = aux;
		aux = aux->next;
	}
	if (prev)
		prev->next = NULL;
	else
		*queue = NULL;
	free(aux);
}

/**
 * @brief   Removes all the nodes of the queue.
 *
 * @param queue	Pointer to the first element of the queue.
 */
void	qu_clear(t_queue **queue)
{
	while (!qu_empty(*queue))
		qu_dequeue(queue);
}
