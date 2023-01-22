/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_printers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 01:29:12 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/22 12:48:10 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief   Prints the list.
 *
 * @param lst   Pointer to the first element of the list.
 */
void	lst_print(t_list *lst)
{
	ft_putstr_fd("[ ", 1);
	while (lst)
	{
		ft_putstr_fd(lst->content, 1);
		if (lst->next)
			ft_putstr_fd(" -> ", 1);
		lst = lst->next;
	}
	ft_putstr_fd(" ]", 1);
}
