/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:44:32 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/stack.h"

t_n1	*stk_new(void *data)
{
	t_n1	*new;

	new = (t_n1 *) malloc(sizeof(t_n1));
	if (new == NULL)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	stk_push(t_n1 **stack, void *data)
{
	t_n1	*new;

	new = stk_new(data);
	if (new == NULL)
		return ;
	new->next = *stack;
	*stack = new;
}
