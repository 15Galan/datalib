/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:46:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 18:49:22 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>
# include <unistd.h>
# include "node.h"

/**	STACK **/

// Creates stack items

t_n1	*stk_new(void *data);
void	stk_push(t_n1 **stack, void *data);

// Modifies stack items

/* The stack is a LIFO structure: items can't be modified */

// Deletes stack items

t_n1	*stk_pop(t_n1 **stack);
void	stk_clear(t_n1 **stack);

// Checks stack information

int		stk_empty(t_n1 *stack);
int		stk_size(t_n1 *stack);
t_n1	*stk_top(t_n1 *stack);
void	*stk_peek(t_n1 *stack);

// Prints the stack

void	stk_print(t_n1 *stack);
