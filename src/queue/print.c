/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 18:00:35 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Prints the queue.
 * 
 * @param queue	The first element of the queue.
 */
void	que_print(t_queue *queue)
{
	t_queue	*aux;

	aux = queue;
	write(1, "( ", 2);
	while (aux)
	{
		write(1, aux->data, len(aux->data));
		if (aux->next)
			write(1, " --> ", 5);
		aux = aux->next;
	}
	write(1, " )", 2);
}
