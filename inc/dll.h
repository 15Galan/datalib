/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:38:18 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 12:26:52 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLL_H
# define DLL_H

# include <stdlib.h>
# include <unistd.h>
# include "nodes.h"

/** DOUBLY LINKED LIST **/

// Creates list items

t_n2	*dll_new(void *data);
void	dll_add_first(t_n2 **list, t_n2 *node);
void	dll_add_after(t_n2 *node, t_n2 *new_node);
void	dll_add_last(t_n2 **list, t_n2 *node);

// Modifies list items

void	dll_replace(t_n2 *node, void *new_data);
void	dll_replace_all(t_n2 *list, void *data, void *new_data);
void	dll_swap(t_n2 *node_a, t_n2 *node_b);

// Deletes list items

void	dll_remove_first(t_n2 **list);
void	dll_remove(t_n2 **list, t_n2 *node);
void	dll_remove_last(t_n2 **list);
void	dll_remove_all(t_n2 **list, void *data);
void	dll_clear(t_n2 **list);

// Check some data from the list

int		dll_is_empty(t_n2 *list);
int		dll_size(t_n2 *list);
t_n2	*dll_first(t_n2 *list);
t_n2	*dll_last(t_n2 *list);
t_n2	*dll_search(t_n2 *list, void *data);

// Print the list

void	dll_print(t_n2 *list);

#endif
