#include "monty.h"

/**
 * f_add - adds top two elements of the stack
 * @head: stack head
 * @line_count: number of line opcode occurs on
 * Return: NULL
 */

void f_add(stack_t **head, unsigned int line_count)
{
	stack_t *h, *n;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	h = *head;
	n = h->next;

	aux = h->n + n->n;
	n->n = aux;
	*head = n;
	free(h);
}
