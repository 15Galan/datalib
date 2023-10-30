/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:25:25 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 17:09:34 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cdll.h"

/**
 * @brief   Replaces the data in the given item with the given new data.
 *
 * @param item	The item with the data to be replaced.
 * @param data  The new data to be stored in the item.
 *
 * @return  The modified item;
 * 			NULL otherwise.
 */
void	cdll_replace(t_n2 *item, void *data)
{
	if (!item)
		return ;
	item->data = data;
}

/**
 * @brief   Replaces all the items wich contains the given data with the given
 * 			new data.
 *
 * @param list	    The first element of the list.
 * @param old_data	The data to be replaced in the list.
 * @param new_data  The data to replace the old data with.
 */
void	cdll_replace_all(t_n2 **list, void *old_data, void *new_data)
{
	t_n2	*aux;

	aux = *list;
	while (aux)
	{
		if (aux->data == old_data)
			cdll_replace(aux, new_data);
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
void	cdll_swap_consecutives(t_n2 *item_a, t_n2 *item_b)
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
void	cdll_swap_non_consecutives(t_n2 *item_a, t_n2 *item_b)
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

/**
 * @brief   Swaps the position of the given items.
 *			It always swaps the items, even if they have the same data (because
 *			they have not the same memory address).
 *
 * @param item_a  	The first item to be swapped.
 * @param item_b  	The second item to be swapped.
 */
void	cdll_swap(t_n2 *item_a, t_n2 *item_b)
{
	if (!item_a || !item_b || item_a == item_b)
		return ;
	if (item_a->next == item_b)
		cdll_swap_consecutives(&item_a, &item_b);
	else
		cdll_swap_non_consecutives(&item_a, &item_b);
}
