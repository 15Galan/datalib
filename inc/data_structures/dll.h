/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:38:18 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 20:52:11 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLL_H
# define DLL_H

# include "../utils.h"
# include "../nodes.h"

/** DOUBLY LINKED LIST **/

// Creates list items

t_n2	*dll_new(void *data);
void	dll_add_first(t_n2 **list, t_n2 *item);
void	dll_add_before(t_n2 *item, t_n2 *new_item);
void	dll_add_after(t_n2 *item, t_n2 *new_item);
void	dll_add_last(t_n2 **list, t_n2 *item);

// Modifies list items

void	dll_replace(t_n2 *item, void *new_data);
void	dll_replace_all(t_n2 **list, void *old_data, void *new_data);
void	dll_swap(t_n2 *item_a, t_n2 *item_b);

// Deletes list items

void	dll_remove_first(t_n2 **list);
void	dll_remove(t_n2 **list, t_n2 *item);
void	dll_remove_last(t_n2 **list);
void	dll_remove_all(t_n2 **list, void *data);
void	dll_clear(t_n2 **list);

// Checks list information

int		dll_is_empty(t_n2 *list);
int		dll_size(t_n2 *list);
t_n2	*dll_first(t_n2 *list);
t_n2	*dll_last(t_n2 *list);
t_n2	*dll_search(t_n2 *list, void *data);

// Prints the list

void	dll_print(t_n2 *list);

#endif
