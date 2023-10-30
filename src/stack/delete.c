/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:51:02 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 20:41:09 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/data_structures/stack.h"

/**
 * @brief	Extracts the top item from the stack.
 *
 * @param stack	The top of the stack.
 *
 * @return 	The top item of the stack;
 * 			NULL if the stack is empty.
 */
t_n1	*stk_pop(t_n1 **stack)
{
	t_n1	*aux;

	if (*stack == NULL)
		return (NULL);
	aux = *stack;
	*stack = (*stack)->next;
	aux->next = NULL;
	return (aux);
}

/**
 * @brief	Removes all items from the stack.
 *
 * @param stack 	The top of the stack.
 */
void	stk_clear(t_n1 **stack)
{
	t_n1	*aux;

	while (*stack != NULL)
	{
		aux = *stack;
		*stack = (*stack)->next;
		free(aux);
	}
}
