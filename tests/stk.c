// Pruebas para las funciones de Stack

#include "/home/srgalan/Sync/git-ft/datalib/datalib.h"

void status(char* msg, t_stack* stack)
{
	ft_putstr_fd(msg, 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("List: ", 1);
	sk_print(stack);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("Size: ", 1);
	ft_putnbr_fd(sk_size(stack), 1);
	ft_putstr_fd("\n\n", 1);
}

int main() {
	t_stack *stack = NULL;

	status("Empty stack state.", stack);

	stack = sk_new("Hello");

	status("Created nodes state.", stack);

	sk_push(&stack, "World");

	status("New node stack state.", stack);

	sk_push(&stack, "how");
	sk_push(&stack, "are");
	sk_push(&stack, "you");
	sk_push(&stack, "?");

	status("Filled stack state.", stack);

	t_stack *top = NULL;
	top = sk_pop(&stack);

	status("Popped stack state.", stack);
	status("* Popped element. *", top);

	sk_clear(&stack);

	status("Cleared stack state.", stack);

	return 0;
}
