/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stk_printers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/28 23:01:37 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Prints the stack.
 *
 * @param stack	Pointer to the stack.
 */
void	stk_print(t_stack *stack)
{
	write(1, "| ", 2);
	while (stack)
	{
		write(1, stack->data, len(stack->data));
		if (stack->next)
			write(1, " | ", 3);
		stack = stack->next;
	}
	write(1, " |", 2);
}
