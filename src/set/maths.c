/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:48:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:42:00 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/set.h"

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
