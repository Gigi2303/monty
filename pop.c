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
		fprint(stderr, "L%d: can't pop an empty stack);
		fclose(bus.file);
		free_stack(*head);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
