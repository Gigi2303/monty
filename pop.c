#include "monty.h"

/**
 * f_pop - removes the top element
 * @head: stack head
 * @counter: line_number
 * return: NULL
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", counter);
		free_all();
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
