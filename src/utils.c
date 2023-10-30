/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 23:00:35 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 20:50:41 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/utils.h"

/**
 * @brief	Counts the number of characters occupied by the string
 *			representation of a data value. 
 * 
 * @param data	The data to represent as a string.
 *
 * @return	The length of the data representation as a string.
 */
int	len(void *data)
{
	int	i;

	i = 0;
	while (((char *)data)[i])
		i++;
	return (i);
}
