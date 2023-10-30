/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 20:40:24 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/queue.h"

/**
 * @brief   Creates a new item with the given data.
 *
 * @param data  The data to be stored in the item.
 *
 * @return  The new item.
 */
t_n1	*que_new(void *data)
{
	t_n1	*new;

	new = (t_n1 *) malloc(sizeof(t_n1));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

/**
 * @brief   Adds a new item at the end of the queue.
 *
 * @param queue	The first item of the queue.
 * @param data	The data to be stored in the item.
 */
void	que_enqueue(t_n1 **queue, void *data)
{
	t_n1	*new;

	new = que_new(data);
	if (!new)
		return ;
	if (que_is_empty(*queue))
		*queue = new;
	else
		que_last(*queue)->next = new;
}
