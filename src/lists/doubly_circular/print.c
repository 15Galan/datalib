/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 11:58:32 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 17:09:45 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Prints the circular doubly linked list.
 *
 * @param list	The first element of the list.
 */
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
