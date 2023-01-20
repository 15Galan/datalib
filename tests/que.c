// Pruebas para las funciones de Queue

#include "/home/srgalan/Sync/git-ft/datalib/datalib.h"

void status(char *msg, t_queue *q)
{
	ft_putstr_fd(msg, 1);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("Queue: ", 1);
	qu_print(q);
	ft_putchar_fd('\n', 1);

	ft_putstr_fd("Size: ", 1);
	ft_putnbr_fd(qu_size(q), 1);
	ft_putstr_fd("\n\n", 1);
}

int main() {
	t_queue *q = NULL;

	status("Empty queue", q);

	qu_enqueue(&q, "Hola");
	status("Enqueue Hola", q);

	qu_enqueue(&q, "Mundo");
	status("Enqueue Mundo", q);

	qu_enqueue(&q, "!");
	status("Enqueue !", q);

	qu_dequeue(&q);
	status("Dequeue", q);

	qu_dequeue(&q);
	status("Dequeue", q);

	int i = 0;
	while (i < 5)
	{
		qu_enqueue(&q, "o.o");
		i++;
	}

	status("Enqueue 10 o.o", q);

	qu_clear(&q);

	status("Clear", q);
}
