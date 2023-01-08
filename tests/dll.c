// Pruebas para las funciones de Doubly Linked List

#include "/home/srgalan/Sync/git-ft/datalib/datalib.h"

void status(char *msg, t_dlist *lst)
{
	ft_putstr_fd(msg, 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("List: ", 1);
	dll_print(lst);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("Size: ", 1);
	ft_putnbr_fd(dll_size(lst), 1);
	ft_putstr_fd("\n\n", 1);
}

int	main(void)
{
	t_dlist	*list = NULL;
	t_dlist	*elem = NULL;

	status("Empty list state.", list);

	list = dll_new("Hello");
	elem = dll_new("are");

	status("Created nodes state.", list);

	dll_add_last(&list, dll_new("World"));
	dll_add_last(&list, dll_new("how"));
	dll_add_last(&list, elem);
	dll_add_last(&list, dll_new("you"));
	dll_add_last(&list, dll_new("?"));

	status("Filled list state.", list);

	dll_add_first(&list, dll_new("X"));
	dll_add_after(dll_first(list), dll_new("X"));
	dll_add_last(&list, dll_new("X"));

	status("Modified first, after and last element list state.", list);

	dll_remove_first(&list);

	status("Removed first element state.", list);

	dll_remove(&list, elem);

	status("Removed \"are\" element state.", list);

	dll_remove_last(&list);

	status("Removed last element state.", list);

	dll_purge(&list, ";");

	status("Purged list (!) state.", list);

	dll_clear(&list);

	status("Cleared list state.", list);

	return (0);
}