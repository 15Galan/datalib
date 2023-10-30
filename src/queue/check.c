/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 20:19:28 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Checks if the queue is empty.
 *
 * @param queue	The first item of the queue.
 *
 * @return	1 if the queue is empty;
 * 			0 otherwise.
 */
int	que_is_empty(t_n1 *queue)
{
	return (queue == NULL);
}

/**
 * @brief   Counts the number of items in the queue.
 *
 * @param queue   The first item of the queue.
 *
 * @return  Number of items in the queue.
 */
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

/**
 * @brief   Returns the first item of the queue.
 *
 * @param queue	The first item of the queue.
 *
 * @return	The first item of the queue.
 */
t_n1	*que_first(t_n1 *queue)
{
	return (queue);
}

/**
 * @brief   Returns the last item of the queue.
 *
 * @param queue	The first item of the queue.
 *
 * @return	The last item of the queue.
 */
t_n1	*que_last(t_n1 *queue)
{
	while (queue && queue->next)
		queue = queue->next;
	return (queue);
}

