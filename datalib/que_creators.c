/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   que_creators.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/19 21:12:10 by antgalan         ###   ########.fr       */
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
t_queue	*qu_new(void *data)
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
 * @brief   Adds a new node at the beginning of the queue.
 *
 * @param queue	Pointer to the first element of the queue.
 * @param data	Pointer to the data to be stored in the node.
 */
void	qu_enqueue(t_queue **queue, void *data)
{
	t_queue	*new;

	new = qu_new(data);
	if (!new)
		return ;
	if (qu_empty(*queue))
		*queue = new;
	else
	{
		new->next = *queue;
		*queue = new;
	}
}
