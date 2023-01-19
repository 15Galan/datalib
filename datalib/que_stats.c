/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   que_stats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/19 21:12:18 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Checks if the queue is empty.
 * @param queue	Pointer to the first element of the queue.
 *
 * @return	1 if the queue is empty;
 * 			0 otherwise.
 */
int	qu_empty(t_queue *queue)
{
	return (queue == NULL);
}

/**
 * @brief   Counts the number of nodes in the queue.
 *
 * @param queue   Pointer to the first element of the queue.
 *
 * @return  Number of nodes in the queue.
 */
int	qu_size(t_queue *queue)
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

/**
 * @brief   Returns the first node of the queue.
 *
 * @param queue	Pointer to an element of the queue.
 *
 * @return	Pointer to the first node of the queue.
 */
t_queue	*qu_first(t_queue *queue)
{
	return (queue);
}

/**
 * @brief   Returns the last node of the queue.
 *
 * @param queue	Pointer to an element of the queue.
 *
 * @return	Pointer to the last node of the queue.
 */
t_queue	*qu_last(t_queue *queue)
{
	while (queue && queue->next)
		queue = queue->next;
	return (queue);
}

/**
 * @brief	Searches an element in the queue.
 *
 * @param queue	Pointer to the first element of the queue.
 * @param data	The data to search.
 *
 * @return	Pointer to the node containing the data;
 * 			NULL if the data is not found.
 */
t_queue	*qu_search(t_queue *queue, void *data)
{
	while (queue)
	{
		if (queue->data == data)
			return (queue);
		queue = queue->next;
	}
	return (NULL);
}
