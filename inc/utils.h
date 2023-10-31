/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:40:27 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/31 18:43:58 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>

/** UTILS & GENERAL PURPOSE	**/

/**
 * @brief	Counts the number of characters occupied by the string
 *			representation of a data value. 
 * 
 * @param data	The data to represent as a string.
 *
 * @return	The length of the data representation as a string.
 */
int		len(void *data);

#endif
