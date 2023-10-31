/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:17:37 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:37:22 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CDLL_H
# define CDLL_H

# include "../utils.h"
# include "../nodes.h"

/** CIRCULAR DOUBLY LINKED LIST **/

// Creates list items

/**
 * @brief   Creates a new item with the given data.
 *
 * @param data  The data to be stored in the item.
 *
 * @return  The new item.
 */
t_n2	*cdll_new(void *data);

/**
 * @brief   Adds a new item at the beginning of the list.
 *
 * @param list	The first item of the list.
 * @param item	The new item to be added.
 */
void	cdll_add_first(t_n2 **list, t_n2 *item);

/**
 * @brief   Adds a new item before the given item.
 *
 * @param list		The first item of the list.
 * @param new_item  The new item to be added.
 */
void	cdll_add_before(t_n2 *item, t_n2 *new_item);

/**
 * @brief   Adds a new item after the given item.
 *
 * @param list		The first item of the list.
 * @param new_item  The new item to be added.
 */
void	cdll_add_after(t_n2 *item, t_n2 *new_item);

/**
 * @brief   Adds a new item at the end of the list.
 *
 * @param list	The first item of the list.
 * @param item	The new item to be added.
 */
void	cdll_add_last(t_n2 **list, t_n2 *item);

// Modifies list items

/**
 * @brief   Replaces the data in the given item with the given new data.
 *
 * @param item	The item with the data to be replaced.
 * @param data  The new data to be stored in the item.
 *
 * @return  The modified item;
 * 			NULL otherwise.
 */
void	cdll_replace(t_n2 *item, void *new_data);

/**
 * @brief   Replaces all the items wich contains the given data with the given
 * 			new data.
 *
 * @param list	    The first element of the list.
 * @param old_data	The data to be replaced in the list.
 * @param new_data  The data to replace the old data with.
 */
void	cdll_replace_all(t_n2 **list, void *old_data, void *new_data);

/**
 * @brief   Swaps the position of the given items.
 *			It always swaps the items, even if they have the same data (because
 *			they have not the same memory address).
 *
 * @param item_a  	The first item to be swapped.
 * @param item_b  	The second item to be swapped.
 */
void	cdll_swap(t_n2 *item_a, t_n2 *item_b);

// Deletes list items

/**
 * @brief	Removes the first item of the list.
 * 
 * @param list	The first element of the list.
 */
void	cdll_remove_first(t_n2 **list);

/**
 * @brief	Removes the given item from the list.
 * 
 * @param list	The first element of the list.
 * @param item	The element to be removed.
 */
void	cdll_remove(t_n2 **list, t_n2 *item);

/**
 * @brief	Removes the last item of the list.
 * 
 * @param list	The first element of the list.
 */
void	cdll_remove_last(t_n2 **list);

/**
 * @brief	Removes the given item from the list and frees it.
 * 
 * @param list	The first element of the list.
 * @param data	The data to be removed.
 */
void	cdll_purge(t_n2 **list, void *data);

/**
 * @brief   Removes all the items of the list.
 *
 * @param list	The first item of the list.
 */
void	cdll_clear(t_n2 **list);

// Checks list information

/**
 * @brief	Checks if the list is empty.
 *
 * @param list	The first element of the list.
 *
 * @return	1 if the list is empty;
 * 			0 otherwise.
 */
int		cdll_is_empty(t_n2 *list);

/**
 * @brief   Counts the number of items in the list.
 *
 * @param list   The first element of the list.
 *
 * @return  Number of items in the list.
 */
int		cdll_size(t_n2 *list);

/**
 * @brief   Gets the first item of the list.
 *
 * @param list	Any item of the list.
 *
 * @return	The first item of the list.
 */
t_n2	*cdll_first(t_n2 *list);

/**
 * @brief   Gets the last item of the list.
 *
 * @param list	Any item of the list.
 *
 * @return	The last item of the list.
 */
t_n2	*cdll_last(t_n2 *list);

/**
 * @brief	Searches an item in the list.
 *
 * @param list	The first item of the list.
 * @param data	The data to search.
 *
 * @return	The item containing the data;
 * 			NULL if the data is not found.
 */
t_n2	*cdll_search(t_n2 *list, void *data);

// Prints the list

/**
 * @brief	Prints the circular doubly linked list.
 *
 * @param list	The first element of the list.
 */
void	cdll_print(t_n2 *list);

#endif
