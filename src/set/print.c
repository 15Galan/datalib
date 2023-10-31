/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:51:42 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:43:06 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/set.h"

void	set_print(t_n1 *set)
{
	t_n1	*aux;

	aux = set;
	write(1, "{ ", 2);
	while (aux)
	{
		write(1, aux->data, len(aux->data));
		if (aux->next)
			write(1, ", ", 2);
		aux = aux->next;
	}
	write(1, " }", 2);
}
