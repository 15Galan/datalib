/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:48:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 18:40:23 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.h"

/**
 * @brief	Perform the union operation on the given A and B sets.
 * 
 * @param set_a	The first set.
 * @param set_b	The second set.
 *
 * @return	The new set with elements that are in set A or set B.
 */
t_n1	*set_union(t_n1 *set_a, t_n1 *set_b)
{
	t_n1	*aux;
	t_n1	*new;

	new = NULL;
	aux = set_a;
	while (aux)
	{
		set_add(&new, aux->data);
		aux = aux->next;
	}
	aux = set_b;
	while (aux)
	{
		set_add(&new, aux->data);
		aux = aux->next;
	}
	return (new);
}

/**
 * @brief	Perform the intersection operation on the given A and B sets.
 * 
 * @param set_a	The first set.
 * @param set_b	The second set.
 *
 * @return	The new set with elements that are in set A and set B.
 */
t_n1	*set_inter(t_n1 *set_a, t_n1 *set_b)
{
	t_n1	*aux;
	t_n1	*new;

	new = NULL;
	aux = set_a;
	while (aux)
	{
		if (set_contains(set_b, aux->data))
			set_add(&new, aux->data);
		aux = aux->next;
	}
	return (new);
}

/**
 * @brief	Perform the difference operation on the given A and B sets.
 * 
 * @param set_a	The first set.
 * @param set_b	The second set.
 *
 * @return	The new set with elements that are in set A but not in set B.
 */
t_n1	*set_diff(t_n1 *set_a, t_n1 *set_b)
{
	t_n1	*aux;
	t_n1	*new;

	new = NULL;
	aux = set_a;
	while (aux)
	{
		if (!set_contains(set_b, aux->data))
			set_add(&new, aux->data);
		aux = aux->next;
	}
	return (new);
}
