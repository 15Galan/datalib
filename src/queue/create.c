/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:39:19 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/queue.h"

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
