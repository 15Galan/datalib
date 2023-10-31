/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:46:46 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:45:39 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "../utils.h"
# include "../nodes.h"

/**	STACK **/

// Creates stack items

/**
 * @brief	Creates a new item for the stack.
 *
 * @param data	The data to store in the item.
 *
 * @return	The new stack.
 */
t_n1	*stk_new(void *data);

/**
 * @brief	Adds an item to the stack.
 *
 * @param stack	Top item of the stack.
 * @param data 	The data to store in the stack.
 */
void	stk_push(t_n1 **stack, void *data);

// Modifies stack items

/* The stack is a LIFO structure: items can't be modified */

// Deletes stack items

/**
 * @brief	Extracts the top item from the stack.
 *
 * @param stack	The top of the stack.
 *
 * @return 	The top item of the stack;
 * 			NULL if the stack is empty.
 */
t_n1	*stk_pop(t_n1 **stack);

/**
 * @brief	Removes all items from the stack.
 *
 * @param stack 	The top of the stack.
 */
void	stk_clear(t_n1 **stack);

// Checks stack information

/**
 * @brief	Checks if the stack is empty.
 *
 * @param stack	The top item of the stack.
 *
 * @return	1 if the stack is empty;
 * 			0 otherwise.
 */
int		stk_is_empty(t_n1 *stack);

/**
 * @brief	Counts the number of items in the stack.
 *
 * @param stack	The top item of the stack.
 *
 * @return	Number of items in the stack.
 */
int		stk_size(t_n1 *stack);

/**
 * @brief	Checks the top item of the stack.
 *
 * @param stack	The stack.
 *
 * @return 	The top item;
 * 			NULL if the stack is empty.
 */
t_n1	*stk_top(t_n1 *stack);

/**
 * @brief	Checks the top item data of the stack.
 *
 * @param stack	The stack.
 *
 * @return	The top item data;
 * 			NULL if the stack is empty.
 */
void	*stk_peek(t_n1 *stack);

// Prints the stack

/**
 * @brief	Prints the stack.
 *
 * @param stack	The stack.
 */
void	stk_print(t_n1 *stack);

#endif
