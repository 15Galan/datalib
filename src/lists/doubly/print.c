/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 17:10:28 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dll.h"

/**
 * @brief	Prints the doubly linked list.
 *
 * @param list	The first element of the list.
 */
void	dll_print(t_n2 *list)
{
	t_n2	*aux;

	aux = dll_first(list);
	write(1, "[ ", 2);
	while (aux)
	{
		write(1, aux->data, len(aux->data));
		if (aux->next)
			write(1, " <--> ", 5);
		aux = aux->next;
	}
	write(1, " ]", 2);
}
