/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   que.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:32:56 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/22 02:00:29 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/srgalan/Sync/git-ft/datalib/datalib.h"

void	status(char *msg, t_queue *lst, unsigned int spc)
{
	unsigned int	i;

	i = 0;
	ft_putstr_fd(msg, 1);
	ft_putstr_fd("\t`", 1);
	qu_print(lst);
	ft_putstr_fd("`\n", 1);
	while (i++ < spc)
		ft_putchar_fd('\n', 1);
}

void	test_basics(t_queue **queue)
{
	status("**Sea la cola:**", *queue, 1);
	qu_enqueue(queue, "antgalan");
	status("Se encola 'antgalan':", *queue, 0);
	qu_enqueue(queue, "yfuentes");
	status("Se encola 'yfuentes':", *queue, 0);
	qu_enqueue(queue, "ernesmar");
	status("Se encola 'ernesmar':", *queue, 0);
	qu_enqueue(queue, "antgalan");
	status("Se encola 'antgalan':", *queue, 0);
	qu_enqueue(queue, "pmarquez");
	status("Se encola 'pmarquez':", *queue, 1);
	qu_dequeue(queue);
	status("Se desencola un elemento:", *queue, 0);
	qu_dequeue(queue);
	status("Se desencola un elemento:", *queue, 1);
	qu_clear(queue);
	status("Se vacía la cola:", *queue, 1);
	qu_dequeue(queue);
	status("Se desencola un elemento:", *queue, 3);
}

void	test_stats(t_queue *queue)
{
	status("**Sea la cola:**", queue, 1);
	ft_putstr_fd("¿Está vacía?: ", 1);
	if (qu_empty(queue))
		ft_putstr_fd("Sí\n", 1);
	else
		ft_putstr_fd("No\n", 1);
	ft_putstr_fd("Tamaño de la cola: ", 1);
	ft_putnbr_fd(qu_size(queue), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("\nPrimer elemento: ", 1);
	if (qu_first(queue))
		ft_putstr_fd(qu_first(queue)->data, 1);
	else
		ft_putstr_fd("No existe", 1);
	ft_putstr_fd("\nÚltimo elemento: ", 1);
	if (qu_last(queue))
		ft_putstr_fd(qu_last(queue)->data, 1);
	else
		ft_putstr_fd("No existe", 1);
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	t_queue	*queue;

	queue = NULL;
	ft_putstr_fd("# Funciones básicas\n\n", 1);
	test_basics(&queue);
	qu_enqueue(&queue, "antgalan");
	qu_enqueue(&queue, "yfuentes");
	qu_enqueue(&queue, "ernesmar");
	qu_enqueue(&queue, "pmarquez");
	ft_putstr_fd("# Funciones de atributos\n\n", 1);
	test_stats(queue);
	ft_putstr_fd("\n\n", 1);
	test_stats(NULL);
	return (0);
}
