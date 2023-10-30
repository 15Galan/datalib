/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:20:09 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 18:37:07 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.h"

/**
 * @brief	Checks if the set is empty.
 * 
 * @param set	The first element of the set.
 *
 * @return	1 if the set is empty;
 *			0 otherwise.
 */
int	set_is_empty(t_n1 *set)
{
	if (!set)
		return (1);
	return (0);
}

/**
 * @brief	Checks if the set contains the data.
 * 
 * @param set	The first element of the set.
 * @param data	The data to check.
 *
 * @return	1 if the set contains the data;
 *			0 otherwise.
 */
int	set_contains(t_n1 *set, void *data)
{
	while (set)
	{
		if (set->data == data)
			return (1);
		set = set->next;
	}
	return (0);
}

/**
 * @brief	Checks if the set A is a subset of set B;
 			B contains all the elements of A.
 * 
 * @param set_a	The subset.
 * @param set_b The superset.
 * 
 * @return	1 if the set A is a subset of set B;
 *			0 otherwise.
 */
int	set_subset(t_n1 *set_a, t_n1 *set_b)
{
	while (set_a)
	{
		if (!set_contains(set_b, set_a->data))
			return (0);
		set_a = set_a->next;
	}
	return (1);
}

/**
 * @brief	Checks if the set A is equal to set B;
 			A contains all the elements of B and vice versa.
 * 
 * @param set_a	The first set.
 * @param set_b The second set.
 * 
 * @return	1 if the set A is equal to set B;
 *			0 otherwise.
 */
int	set_equal(t_n1 *set_a, t_n1 *set_b)
{
	if (set_size(set_a) != set_size(set_b))
		return (0);
	return (set_subset(set_a, set_b) && set_subset(set_b, set_a));
}

/**
 * @brief	Checks if the set A is disjoint from set B;
 			A and B have no elements in common.
 * 
 * @param set_a	The first set.
 * @param set_b The second set.
 * 
 * @return	1 if the set A is disjoint from set B;
 *			0 otherwise.
 */
int	set_size(t_n1 *set)
{
	int	i;

	i = 0;
	while (set)
	{
		i++;
		set = set->next;
	}
	return (i);
}
