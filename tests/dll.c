/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:32:56 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/21 21:38:07 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/srgalan/Sync/git-ft/datalib/datalib.h"

void	status(char *msg, t_dlist *lst, unsigned int spc)
{
	unsigned int	i;

	i = 0;
	ft_putstr_fd(msg, 1);
	ft_putstr_fd("\t`", 1);
	dll_print(lst);
	ft_putchar_fd('`', 1);
	while (i++ < spc)
		ft_putchar_fd('\n', 1);
}

void	test_addition(t_dlist **list)
{
	t_dlist	*tmp;

	status("**Sea la lista doblemente enlazada:**", *list, 2);
	dll_add_first(list, dll_new("antgalan"));
	status("Se añade 'antgalan' al principio:", *list, 1);
	dll_add_first(list, dll_new("ernesmar"));
	status("Se añade 'ernesmar' al principio:", *list, 2);
	dll_add_after(dll_search(*list, "ernesmar"), dll_new("yfuentes"));
	status("Se añade 'yfuentes' después de 'ernesmar':", *list, 1);
	dll_add_after(dll_search(*list, "antgalan"), dll_new("abello-r"));
	status("Se añade 'abello-r' después de 'antgalan':", *list, 2);
	dll_add_last(list, dll_new("pmarquez"));
	status("Se añade 'pmarquez' al final:", *list, 3);
	tmp = NULL;
	status("**Sea la lista doblemente enlazada (constante):**", tmp, 2);
	dll_add_first(&tmp, dll_new("antgalan"));
	status("Se añade 'antgalan' al principio:", tmp, 2);
	tmp = NULL;
	dll_add_last(&tmp, dll_new("antgalan"));
	status("Se añade 'antgalan' al final:", tmp, 2);
	tmp = NULL;
	dll_add_after(dll_search(tmp, "antgalan"), dll_new("abello-r"));
	status("Se añade 'abello-r' después de 'antgalan':", tmp, 4);
}

void	test_stats(t_dlist *list)
{
	dll_add_after(dll_search(list, "yfuentes"), dll_new("ernesmar"));
	status("**Sea la lista doblemente enlazada:**", list, 2);
	ft_putstr_fd("El primer elemento (estando en *abello-r*):\t", 1);
	if (dll_first(dll_search(list, "abello-r")))
		ft_putendl_fd(dll_first(list)->data, 1);
	else
		ft_putendl_fd("No existe", 1);
	ft_putstr_fd("El último elemento (estando en 'yfuentes'):\t", 1);
	if (dll_last(dll_search(list, "yfuentes")))
		ft_putendl_fd(dll_last(list)->data, 1);
	else
		ft_putendl_fd("No existe", 1);
	ft_putstr_fd("\n¿Está 'antgalan'?:\t", 1);
	if (dll_search(list, "antgalan"))
		ft_putendl_fd("Sí", 1);
	else
		ft_putendl_fd("No", 1);
	ft_putstr_fd("¿Está 'sr-galan'?:\t", 1);
	if (dll_search(list, "srgalan"))
		ft_putendl_fd("Sí", 1);
	else
		ft_putendl_fd("No", 1);
	ft_putstr_fd("\n\n\n", 1);
}

void	test_deletion(t_dlist **list)
{
	t_dlist	*tmp;

	status("**Sea la lista doblemente enlazada:**", *list, 2);
	dll_purge(list, "ernesmar");
	status("Se purga *ernesmar*:", *list, 1);
	dll_remove_first(list);
	status("Se elimina el primer elemento:", *list, 1);
	dll_remove_last(list);
	status("Se elimina el último elemento:", *list, 1);
	dll_remove(list, dll_search(*list, "abello-r"));
	status("Se elimina 'abello-r':", *list, 2);
	tmp = NULL;
	status("Sea la lista doblemente enlazada (constante):", tmp, 2);
	dll_remove_first(&tmp);
	status("Se elimina el primer elemento:", tmp, 1);
	dll_remove_last(&tmp);
	status("Se elimina el último elemento:", tmp, 1);
	dll_remove(&tmp, dll_search(tmp, "abello-r"));
	status("Se elimina 'abello-r':", tmp, 2);
}

int	main(void)
{
	t_dlist	*list;

	list = NULL;
	ft_putstr_fd("# Funciones de creación\n\n", 1);
	test_addition(&list);
	ft_putstr_fd("# Funciones de estadísticas\n\n", 1);
	test_stats(list);
	test_stats(NULL);
	ft_putstr_fd("# Funciones de eliminación\n\n", 1);
	test_deletion(&list);
}
