/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_printers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:51:42 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/28 23:01:31 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

void	set_print(t_set *set)
{
	t_set	*aux;

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
