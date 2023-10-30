/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:00:43 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 13:03:18 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dll.h"

/**
 * @brief   Replaces the data in the given item with the given new data.
 *
 * @param node	The item with the data to be replaced.
 * @param data  The new data to be stored in the item.
 *
 * @return  The modified item;
 * 			NULL otherwise.
 */
void	dll_replace(t_n2 *node, void *data)
{
	if (!node)
		return ;
	node->data = data;
}

/**
 * @brief   Replaces all the items wich contains the given data with the given
 * 			new data.
 *
 * @param list	    The first element of the list.
 * @param old_data	The data to be replaced in the list.
 * @param new_data  The data to replace the old data with.
 */
void	dll_replace_all(t_n2 **list, void *data, void *new_data)
{
	t_n2	*aux;

	aux = *list;
	while (aux)
	{
		if (aux->data == data)
			dll_replace(aux, new_data);
		aux = aux->next;
	}
}

/**
 * @brief	Swaps the position of the given items.
 *			The items are verified to be consecutive.
 * 
 * @param node_a	The first item to be swapped.
 * @param node_b	The second item to be swapped.
 */
void	dll_swap_consecutives(t_n2 *node_a, t_n2 *node_b)
{
	node_a->next = node_b->next;
	node_b->prev = node_a->prev;
	if (node_a->next)
		node_a->next->prev = node_a;
	if (node_b->prev)
		node_b->prev->next = node_b;
	node_a->prev = node_b;
	node_b->next = node_a;
}

/**
 * @brief	Swaps the position of the given items.
 *			The items are verified to be non-consecutives.
 * 
 * @param node_a	The first item to be swapped.
 * @param node_b	The second item to be swapped.
 */
void	dll_swap_non_consecutives(t_n2 *node_a, t_n2 *node_b)
{
	t_n2	*p;
	t_n2	*n;

	p = node_b->prev;
	n = node_b->next;
	node_b->prev = node_a->prev;
	node_b->next = node_a->next;
	node_a->prev = p;
	node_a->next = n;
	if (node_b->prev)
		node_b->prev->next = node_b;
	if (node_b->next)
		node_b->next->prev = node_b;
	if (node_a->prev)
		node_a->prev->next = node_a;
	if (node_a->next)
		node_a->next->prev = node_a;
}

/**
 * @brief   Swaps the position of the given items.
 *			It always swaps the items, even if they have the same data (because
 *			they have not the same memory address).
 *
 * @param node_a  	The first item to be swapped.
 * @param node_b  	The second item to be swapped.
 */
void	dll_swap(t_n2 *node_a, t_n2 *node_b)
{
	if (!node_a || !node_b || node_a == node_b)
		return ;
	if (node_a->next == node_b)
		dll_swap_consecutives(&node_a, &node_b);
	else
		dll_swap_non_consecutives(&node_a, &node_b);
}
