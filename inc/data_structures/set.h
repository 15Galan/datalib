/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:14:41 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:43:09 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SET_H
# define SET_H

# include "../utils.h"
# include "../nodes.h"

/** SET **/

// Creates set items

/**
 * @brief	Creates a new set.
 * 
 * @param data	The data to add.
 * 
 * @return	The new set.
 */
t_n1	*set_new(void *data);

/**
 * @brief	Adds the given data to the set.
 * 
 * @param set	The first element of the set.
 * @param data	The data to add.
 */
void	set_add(t_n1 **set, void *data);

// Modifies set items (math operations)

/**
 * @brief	Perform the union operation on the given A and B sets.
 * 
 * @param set_a	The first set.
 * @param set_b	The second set.
 *
 * @return	The new set with elements that are in set A or set B.
 */
t_n1	*set_union(t_n1 *set_a, t_n1 *set_b);

/**
 * @brief	Perform the intersection operation on the given A and B sets.
 * 
 * @param set_a	The first set.
 * @param set_b	The second set.
 *
 * @return	The new set with elements that are in set A and set B.
 */
t_n1	*set_inter(t_n1 *set_a, t_n1 *set_b);

/**
 * @brief	Perform the difference operation on the given A and B sets.
 * 
 * @param set_a	The first set.
 * @param set_b	The second set.
 *
 * @return	The new set with elements that are in set A but not in set B.
 */
t_n1	*set_diff(t_n1 *set_a, t_n1 *set_b);

// Deletes set items

/**
 * @brief	Removes the given data from the set.
 * 
 * @param set	The first element of the set.
 * @param data	The data to remove.
 */
void	set_remove(t_n1 **set, void *data);

/**
 * @brief	Removes all the elements of the set.
 * 
 * @param set	The first element of the set.
 */
void	set_clear(t_n1 **set);

// Checks set information

/**
 * @brief	Checks if the set is empty.
 * 
 * @param set	The first element of the set.
 *
 * @return	1 if the set is empty;
 *			0 otherwise.
 */
int		set_is_empty(t_n1 *set);

/**
 * @brief	Checks if the set contains the data.
 * 
 * @param set	The first element of the set.
 * @param data	The data to check.
 *
 * @return	1 if the set contains the data;
 *			0 otherwise.
 */
int		set_contains(t_n1 *set, void *data);

/**
 * @brief	Checks if the set A is a subset of set B;
 			B contains all the elements of A.
 * 
 * @param set_a	The subset.
 * @param set_b The superset.
 * 
 * @return	1 if the set A is a subset of set B;
 *			0 otherwise.
 */
int		set_subset(t_n1 *set_a, t_n1 *set_b);

/**
 * @brief	Checks if the set A is equal to set B;
 			A contains all the elements of B and vice versa.
 * 
 * @param set_a	The first set.
 * @param set_b The second set.
 * 
 * @return	1 if the set A is equal to set B;
 *			0 otherwise.
 */
int		set_equal(t_n1 *set_a, t_n1 *set_b);

/**
 * @brief	Checks if the set A is disjoint from set B;
 			A and B have no elements in common.
 * 
 * @param set_a	The first set.
 * @param set_b The second set.
 * 
 * @return	1 if the set A is disjoint from set B;
 *			0 otherwise.
 */
int		set_size(t_n1 *set);

// Prints the set

/**
 * @brief	Prints the set.
 * 
 * @param set	The first element of the set.
 */
void	set_print(t_n1 *set);

#endif
