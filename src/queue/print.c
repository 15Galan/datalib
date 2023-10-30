/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 20:40:27 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/queue.h"

/**
 * @brief	Prints the queue.
 * 
 * @param queue	The queue.
 */
void	que_print(t_n1 *queue)
{
	t_n1	*aux;

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
