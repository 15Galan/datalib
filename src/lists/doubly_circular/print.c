/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:58:32 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:37:16 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/data_structures/cdll.h"

void	cdll_print(t_n2 *list)
{
	t_n2	*aux;

	aux = cdll_first(list);
	write(1, "(...) <-> [ ", 12);
	while (aux)
	{
		write(1, aux->data, len(aux->data));
		if (aux->next != list)
			write(1, " <-> ", 4);
		aux = aux->next;
	}
	write(1, " ] <-> (...)", 12);
}
