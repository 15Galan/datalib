/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/02 12:53:50 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

void	qu_print(t_queue *queue)
{
	t_queue	*aux;

	aux = queue;
	ft_putstr_fd("( ", 1);
	while (aux)
	{
		ft_putstr_fd(aux->data, 1);
		if (aux->next)
			ft_putstr_fd(" >> ", 1);
		aux = aux->next;
	}
	ft_putstr_fd(" )", 1);
}
