/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:14:41 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 19:41:31 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_H
# define SET_H

# include "../utils.h"
# include "../nodes.h"

/** SET **/

// Creates set items

t_n1	*set_new(void *data);
void	set_add(t_n1 **set, void *data);

// Modifies set items (math operations)

t_n1	*set_union(t_n1 *set_a, t_n1 *set_b);
t_n1	*set_inter(t_n1 *set_a, t_n1 *set_b);
t_n1	*set_diff(t_n1 *set_a, t_n1 *set_b);

// Deletes set items

void	set_remove(t_n1 **set, void *data);
void	set_clear(t_n1 **set);

// Checks set information

int		set_is_empty(t_n1 *set);
int		set_contains(t_n1 *set, void *data);
int		set_subset(t_n1 *set_a, t_n1 *set_b);
int		set_equal(t_n1 *set_a, t_n1 *set_b);
int		set_size(t_n1 *set);

// Prints the set

void	set_print(t_n1 *set);
