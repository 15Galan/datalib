/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   datalib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 18:14:37 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATALIB_H
# define DATALIB_H

# include <stdlib.h>
# include <unistd.h>
# include "dll.h"
# include "cdll.h"
# include "queue.h"
# include "set.h"

/** GENERAL PURPOSE	**/

int		len(void *data);

/**	STACK	**/

// Struct for the elements of the stack.
typedef struct s_stack
{
	void			*data;
	struct s_stack	*next;
}	t_stack;

// Basic operations.
t_stack	*stk_new(void *data);
void	stk_push(t_stack **stack, void *data);
t_stack	*stk_pop(t_stack **stack);
void	stk_clear(t_stack **stack);

// Check some data from the stack.
int		stk_empty(t_stack *stack);
int		stk_size(t_stack *stack);
t_stack	*stk_top(t_stack *stack);
void	*stk_peek(t_stack *stack);

// Print the stack.
void	stk_print(t_stack *stack);

#endif
