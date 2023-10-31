/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:00:43 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:26:11 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/data_structures/dll.h"

void	dll_replace(t_n2 *item, void *data)
{
	if (!item)
		return ;
	item->data = data;
}

void	dll_replace_all(t_n2 **list, void *old_data, void *new_data)
{
	t_n2	*aux;

	aux = *list;
	while (aux)
	{
		if (aux->data == old_data)
			dll_replace(aux, new_data);
		aux = aux->next;
	}
}

/**
 * @brief	Swaps the position of the given items.
 *			The items are verified to be consecutive.
 * 
 * @param item_a	The first item to be swapped.
 * @param item_b	The second item to be swapped.
 */
void	dll_swap_consecutives(t_n2 *item_a, t_n2 *item_b)
{
	item_a->next = item_b->next;
	item_b->prev = item_a->prev;
	if (item_a->next)
		item_a->next->prev = item_a;
	if (item_b->prev)
		item_b->prev->next = item_b;
	item_a->prev = item_b;
	item_b->next = item_a;
}

/**
 * @brief	Swaps the position of the given items.
 *			The items are verified to be non-consecutives.
 * 
 * @param item_a	The first item to be swapped.
 * @param item_b	The second item to be swapped.
 */
void	dll_swap_non_consecutives(t_n2 *item_a, t_n2 *item_b)
{
	t_n2	*p;
	t_n2	*n;

	p = item_b->prev;
	n = item_b->next;
	item_b->prev = item_a->prev;
	item_b->next = item_a->next;
	item_a->prev = p;
	item_a->next = n;
	if (item_b->prev)
		item_b->prev->next = item_b;
	if (item_b->next)
		item_b->next->prev = item_b;
	if (item_a->prev)
		item_a->prev->next = item_a;
	if (item_a->next)
		item_a->next->prev = item_a;
}

void	dll_swap(t_n2 *item_a, t_n2 *item_b)
{
	if (!item_a || !item_b || item_a == item_b)
		return ;
	if (item_a->next == item_b)
		dll_swap_consecutives(item_a, item_b);
	else
		dll_swap_non_consecutives(item_a, item_b);
}
