/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:47:09 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 20:22:22 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
# define QUEUE_H

# include "../utils.h"
# include "../nodes.h"

/**	QUEUE **/

// Creates queue items

t_n1	*que_new(void *data);
void	que_enqueue(t_n1 **queue, void *data);

// Modifies queue items

/* The queue is a FIFO structure: items can't be modified */

// Deletes queue items

void	*que_dequeue(t_n1 **queue);
void	que_clear(t_n1 **queue);

// Checks queue information

int		que_is_empty(t_n1 *queue);
int		que_size(t_n1 *queue);
void	*que_first(t_n1 *queue);
void	*que_last(t_n1 *queue);

// Prints the queue

void	que_print(t_n1 *queue);

#endif
