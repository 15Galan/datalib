/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:47:09 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:40:32 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
# define QUEUE_H

# include "../utils.h"
# include "../nodes.h"

/**	QUEUE **/

// Creates queue items

/**
 * @brief   Creates a new item with the given data.
 *
 * @param data  The data to be stored in the item.
 *
 * @return  The new item.
 */
t_n1	*que_new(void *data);

/**
 * @brief   Adds a new item at the end of the queue.
 *
 * @param queue	The first item of the queue.
 * @param data	The data to be stored in the item.
 */
void	que_enqueue(t_n1 **queue, void *data);

// Modifies queue items

/* The queue is a FIFO structure: items can't be modified */

// Deletes queue items

/**
 * @brief   Removes the first item of the queue.
 *
 * @param queue	The first item of the queue.
 * 
 * @return  the data stored in the removed item.
 */
void	*que_dequeue(t_n1 **queue);

/**
 * @brief   Removes all the items of the queue.
 *
 * @param queue	The first item of the queue.
 */
void	que_clear(t_n1 **queue);

// Checks queue information

/**
 * @brief	Checks if the queue is empty.
 *
 * @param queue	The first item of the queue.
 *
 * @return	1 if the queue is empty;
 * 			0 otherwise.
 */
int		que_is_empty(t_n1 *queue);

/**
 * @brief   Counts the number of items in the queue.
 *
 * @param queue   The first item of the queue.
 *
 * @return  Number of items in the queue.
 */
int		que_size(t_n1 *queue);

/**
 * @brief   Returns the first item of the queue.
 *
 * @param queue	The first item of the queue.
 *
 * @return	The first item of the queue.
 */
t_n1	*que_first(t_n1 *queue);

/**
 * @brief   Returns the last item of the queue.
 *
 * @param queue	The first item of the queue.
 *
 * @return	The last item of the queue.
 */
t_n1	*que_last(t_n1 *queue);

// Prints the queue

/**
 * @brief	Prints the queue.
 * 
 * @param queue	The queue.
 */
void	que_print(t_n1 *queue);

#endif
