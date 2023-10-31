/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:53:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:18:01 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/data_structures/dll.h"

int	dll_is_empty(t_n2 *list)
{
	return (list == NULL);
}

int	dll_size(t_n2 *list)
{
	int	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}

t_n2	*dll_first(t_n2 *list)
{
	while (list && list->prev)
		list = list->prev;
	return (list);
}

t_n2	*dll_last(t_n2 *list)
{
	while (list && list->next)
		list = list->next;
	return (list);
}

t_n2	*dll_search(t_n2 *list, void *data)
{
	while (list)
	{
		if (list->data == data)
			return (list);
		list = list->next;
	}
	return (NULL);
}
