/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   que_basics.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/22 12:50:18 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief   Creates a new node with the given data.
 *
 * @param data  Pointer to the data to be stored in the node.
 *
 * @return  Pointer to the new node.
 */
t_queue	*que_new(void *data)
{
	t_queue	*new;

	new = (t_queue *) malloc(sizeof(t_queue));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

/**
 * @brief   Adds a new node at the end of the queue.
 *
 * @param queue	Pointer to the first element of the queue.
 * @param data	Pointer to the data to be stored in the node.
 */
void	que_enqueue(t_queue **queue, void *data)
{
	t_queue	*new;

	new = que_new(data);
	if (!new)
		return ;
	if (que_empty(*queue))
	{
		*queue = new;
		return ;
	}
	que_last(*queue)->next = new;
}

/**
 * @brief   Removes the first node of the queue.
 *
 * @param queue	Pointer to the first element of the queue.
 */
void	que_dequeue(t_queue **queue)
{
	t_queue	*aux;

	if (que_empty(*queue))
		return ;
	aux = *queue;
	*queue = (*queue)->next;
	free(aux);
}

/**
 * @brief   Removes all the nodes of the queue.
 *
 * @param queue	Pointer to the first element of the queue.
 */
void	que_clear(t_queue **queue)
{
	while (!que_empty(*queue))
		que_dequeue(queue);
}
