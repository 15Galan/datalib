/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:04:28 by antgalan          #+#    #+#             */
/*   Updated: 2023/10/30 11:35:39 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NODES_H
# define NODES_H

/**
 * @brief	Single node.
 *			It contains data and references 1 other node.
 *			Normally, the reference is the next (OR previous) node.
 */
typedef struct s_n1
{
	void		*data;
	struct s_n1	*next;
}	t_n1;

/**
 * @brief	Double node.
 *			It contains data and references 2 other nodes.
 *			Normally, the references are the next AND the previous nodes.
 */
typedef struct s_n2
{
	void		*data;
	struct s_n2	*prev;
	struct s_n2	*next;
}	t_n2;

#endif
