/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_stats.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/19 21:12:37 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Checks if the stack is empty.
 *
 * @param stack	Pointer to the stack.
 *
 * @return	1 if the stack is empty;
 * 			0 otherwise.
 */
int	sk_empty(t_stack *stack)
{
	return (stack == NULL);
}

/**
 * @brief	Counts the number of elements in the stack.
 *
 * @param stack	Pointer to the stack.
 *
 * @return	Number of elements in the stack.
 */
int	sk_size(t_stack *stack)
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
 * @brief	Checks the top element of the stack.
 *
 * @param stack	Pointer to the stack.
 *
 * @return 	Pointer to the top element;
 * 			NULL if the stack is empty.
 */
t_stack	*sk_top(t_stack *stack)
{
	if (sk_empty(stack))
		return (NULL);
	return (stack);
}

/**
 * @brief	Checks the top element data of the stack.
 *
 * @param stack	Pointer to the stack.
 *
 * @return	Pointer to the top element data;
 * 			NULL if the stack is empty.
 */
void	*sk_peek(t_stack *stack)
{
	if (sk_empty(stack))
		return (NULL);
	return (stack->data);
}
