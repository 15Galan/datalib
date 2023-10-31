/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:45:13 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/stack.h"

int	stk_is_empty(t_n1 *stack)
{
	return (stack == NULL);
}

int	stk_size(t_n1 *stack)
{
	int	size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

t_n1	*stk_top(t_n1 *stack)
{
	if (stk_is_empty(stack))
		return (NULL);
	return (stack);
}

void	*stk_peek(t_n1 *stack)
{
	if (stk_is_empty(stack))
		return (NULL);
	return (stack->data);
}
