/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:44:57 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 18:38:53 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "set.h"

/**
 * @brief	Creates a new set.
 * 
 * @param data	The data to add.
 * 
 * @return	The new set.
 */
t_n1	*set_new(void *data)
{
	t_n1	*new;

	new = (t_n1 *) malloc(sizeof(t_n1));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

/**
 * @brief	Adds the given data to the set.
 * 
 * @param set	The first element of the set.
 * @param data	The data to add.
 */
void	set_add(t_n1 **set, void *data)
{
	t_n1	*new;

	new = set_new(data);
	if (!new || set_contains(*set, data))
		return ;
	while (*set)
		set = &(*set)->next;
	*set = new;
}
