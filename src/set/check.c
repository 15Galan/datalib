/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:20:09 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:42:54 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/set.h"

int	set_is_empty(t_n1 *set)
{
	if (!set)
		return (1);
	return (0);
}

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

int	set_equal(t_n1 *set_a, t_n1 *set_b)
{
	if (set_size(set_a) != set_size(set_b))
		return (0);
	return (set_subset(set_a, set_b) && set_subset(set_b, set_a));
}

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
