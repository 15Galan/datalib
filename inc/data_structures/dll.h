/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:38:18 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:27:37 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLL_H
# define DLL_H

# include "../utils.h"
# include "../nodes.h"

/** DOUBLY LINKED LIST **/

// Creates list items

/**
 * @brief   Creates a new item with the given data.
 *
 * @param data  The data to be stored in the item.
 *
 * @return  The new item.
 */
t_n2	*dll_new(void *data);

/**
 * @brief   Adds a new item at the beginning of the list.
 *
 * @param list	The first item of the list.
 * @param item	The new item to be added.
 */
void	dll_add_first(t_n2 **list, t_n2 *item);

/**
 * @brief   Adds a new item before the given item.
 *
 * @param list	The first item of the list.
 * @param data  The data to be stored in the item.
 */
void	dll_add_before(t_n2 *item, t_n2 *new_item);

/**
 * @brief   Adds a new item after the given item.
 *
 * @param list		The first item of the list.
 * @param new_item	The new item to be added.
 */
void	dll_add_after(t_n2 *item, t_n2 *new_item);

/**
 * @brief   Adds a new item at the end of the list.
 *
 * @param list	The first item of the list.
 * @param item	The new item to be added.
 */
void	dll_add_last(t_n2 **list, t_n2 *item);

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
void	dll_replace(t_n2 *item, void *new_data);

/**
 * @brief   Replaces all the items wich contains the given data with the given
 * 			new data.
 *
 * @param list	    The first element of the list.
 * @param old_data	The data to be replaced in the list.
 * @param new_data  The data to replace the old data with.
 */
void	dll_replace_all(t_n2 **list, void *old_data, void *new_data);

/**
 * @brief   Swaps the position of the given items.
 *			It always swaps the items, even if they have the same data (because
 *			they have not the same memory address).
 *
 * @param item_a  	The first item to be swapped.
 * @param item_b  	The second item to be swapped.
 */
void	dll_swap(t_n2 *item_a, t_n2 *item_b);

// Deletes list items

/**
 * @brief   Removes the first item of the list.
 *
 * @param list	The first item of the list.
 */
void	dll_remove_first(t_n2 **list);

/**
 * @brief   Removes the given item from the list.
 *
 * @param list	The first item of the list.
 * @param item	The item to be removed.
 */
void	dll_remove(t_n2 **list, t_n2 *item);

/**
 * @brief   Removes the last item of the list.
 *
 * @param list	The first item of the list.
 */
void	dll_remove_last(t_n2 **list);

/**
 * @brief	Removes all the items with the given data.
 *
 * @param list	The first item of the list.
 * @param data	The data to be removed.
 */
void	dll_remove_all(t_n2 **list, void *data);

/**
 * @brief   Removes all the items of the list.
 *
 * @param list	The first item of the list.
 */
void	dll_clear(t_n2 **list);

// Checks list information

/**
 * @brief	Checks if the list is empty.
 *
 * @param list	The first item of the list.
 *
 * @return	1 if the list is empty;
 * 			0 otherwise.
 */
int		dll_is_empty(t_n2 *list);

/**
 * @brief   Counts the number of items in the list.
 *
 * @param list   The first item of the list.
 *
 * @return  Number of items in the list.
 */
int		dll_size(t_n2 *list);

/**
 * @brief   Gets the first item of the list.
 *
 * @param list	Any item of the list.
 *
 * @return	The first item of the list.
 */
t_n2	*dll_first(t_n2 *list);

/**
 * @brief   Gets the last item of the list.
 *
 * @param list	Any item of the list.
 *
 * @return	The last item of the list.
 */
t_n2	*dll_last(t_n2 *list);

/**
 * @brief	Searches an item in the list.
 *
 * @param list	The first item of the list.
 * @param data	The data to search.
 *
 * @return	The item containing the data;
 * 			NULL if the data is not found.
 */
t_n2	*dll_search(t_n2 *list, void *data);

// Prints the list

/**
 * @brief	Prints the doubly linked list.
 *
 * @param list	The first element of the list.
 */
void	dll_print(t_n2 *list);

#endif
