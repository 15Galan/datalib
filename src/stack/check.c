/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 20:41:04 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/stack.h"

/**
 * @brief	Checks if the stack is empty.
 *
 * @param stack	The top item of the stack.
 *
 * @return	1 if the stack is empty;
 * 			0 otherwise.
 */
int	stk_is_empty(t_n1 *stack)
{
	return (stack == NULL);
}

/**
 * @brief	Counts the number of items in the stack.
 *
 * @param stack	The top item of the stack.
 *
 * @return	Number of items in the stack.
 */
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

/**
 * @brief	Checks the top item of the stack.
 *
 * @param stack	The stack.
 *
 * @return 	The top item;
 * 			NULL if the stack is empty.
 */
t_n1	*stk_top(t_n1 *stack)
{
	if (stk_is_empty(stack))
		return (NULL);
	return (stack);
}

/**
 * @brief	Checks the top item data of the stack.
 *
 * @param stack	The stack.
 *
 * @return	The top item data;
 * 			NULL if the stack is empty.
 */
void	*stk_peek(t_n1 *stack)
{
	if (stk_is_empty(stack))
		return (NULL);
	return (stack->data);
}
