// Pruebas para las funciones de Linked List

#include "/home/srgalan/Sync/git-ft/datalib/datalib.h"

void status(char *msg, t_list *lst)
{
	ft_putstr_fd(msg, 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("List: ", 1);
	ll_print(lst);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("Size: ", 1);
	ft_putnbr_fd(ll_size(lst), 1);
	ft_putstr_fd("\n\n", 1);
}

int	main(void)
{
    t_list	*list = NULL;
    t_list	*elem = NULL;

	status("Empty list state.", list);

	list = ll_new("Hello");
	elem = ll_new("are");

	status("Created nodes state.", list);

	ll_add_last(&list, ll_new("World"));
	ll_add_last(&list, ll_new("how"));
	ll_add_last(&list, elem);
	ll_add_last(&list, ll_new("you"));
	ll_add_last(&list, ll_new("?"));

	status("Filled list state.", list);

	ll_add_first(&list, ll_new("X"));
	ll_add_after(ll_first(list), ll_new("X"));
	ll_add_last(&list, ll_new("X"));

	status("Modified first, after and last element list state.", list);

	ll_remove_first(&list);

	status("Removed first element state.", list);

	ll_remove(&list, elem);

	status("Removed \"are\" element state.", list);

	ll_remove_last(&list);

	status("Removed last element state.", list);

	ll_purge(&list, ";");

	status("Purged list (!) state.", list);

	ll_clear(&list);

	status("Cleared list state.", list);

	return (0);
}
