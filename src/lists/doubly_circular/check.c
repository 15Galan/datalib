/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 22:28:07 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:37:04 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/data_structures/cdll.h"

int	cdll_is_empty(t_n2 *list)
{
	return (list == NULL);
}

int	cdll_size(t_n2 *list)
{
	int	i;

	i = 0;
	if (cdll_is_empty(list))
		return (0);
	while (list->next && list->next != list)
	{
		list = list->next;
		i++;
	}
	return (i + 1);
}

t_n2	*cdll_first(t_n2 *list)
{
	while (list->prev)
		list = list->prev;
	return (list);
}

t_n2	*cdll_last(t_n2 *list)
{
	while (list->next && list->next != list)
		list = list->next;
	return (list);
}

t_n2	*cdll_search(t_n2 *list, void *data)
{
	while (list && list->next != list)
	{
		if (list->data == data)
			return (list);
		list = list->next;
	}
	return (NULL);
}
