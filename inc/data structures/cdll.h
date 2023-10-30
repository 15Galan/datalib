/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cdll.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:17:37 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 19:11:44 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CDLL_H
# define CDLL_H

# include <stdlib.h>
# include <unistd.h>
# include "nodes.h"

/** CIRCULAR DOUBLY LINKED LIST **/

// Creates list items

t_n2	*cdll_new(void *data);
void	cdll_add_first(t_n2 **list, t_n2 *item);
void	cdll_add_before(t_n2 *item, t_n2 *new_item);
void	cdll_add_after(t_n2 *item, t_n2 *new_item);
void	cdll_add_last(t_n2 **list, t_n2 *item);

// Modifies list items

void	cdll_replace(t_n2 *item, void *new_data);
void	cdll_replace_all(t_n2 *list, void *old_data, void *new_data);
void	cdll_swap(t_n2 *item_a, t_n2 *item_b);

// Deletes list items

void	cdll_remove_first(t_n2 **list);
void	cdll_remove(t_n2 **list, t_n2 *item);
void	cdll_remove_last(t_n2 **list);
void	cdll_purge(t_n2 **list, void *data);
void	cdll_clear(t_n2 **list);

// Checks list information

int		cdll_is_empty(t_n2 *list);
int		cdll_size(t_n2 *list);
t_n2	*cdll_first(t_n2 *list);
t_n2	*cdll_last(t_n2 *list);
t_n2	*cdll_search(t_n2 *list, void *data);

// Prints the list

void	cdll_print(t_n2 *list);

#endif
