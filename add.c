#include <monty>

/**
 * f_add - adds top two elements of the stack
 * @head: stack head
 * @line_count: number of line opcode occurs on
 * Return: NULL
 */

void f_add(stack_t **head, unsigned int line_count)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		printf(stderr, "L%d: can't add, stack too short\n", line_count);
		fclose(bus.file);
		free(bus.content);
		free_s(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + n->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
