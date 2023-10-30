/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 18:50:52 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "datalib.h"

/**
 * @brief	Creates a new element for the stack.
 *
 * @param data	The data to store in the element.
 *
 * @return	Pointer to the new element.
 */
t_stack	*stk_new(void *data)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(t_stack));
	if (new == NULL)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

/**
 * @brief	Adds an element to the stack.
 *
 * @param stack	Pointer to the stack.
 * @param data 	The data to store in the new element.
 */
void	stk_push(t_stack **stack, void *data)
{
	t_stack	*new;

	new = stk_new(data);
	if (new == NULL)
		return ;
	new->next = *stack;
	*stack = new;
}
