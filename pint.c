#include "monty.h"

/**
 * f_pint - prints the top of stack
 * @head: stack head
 * @counter: line_number
 * return: NULL
 */
void f_pint(stack_t **head, unsigned int counter)
{
	(void)head;
	if (statements->head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty/n", counter);
		free_all();
		exit(EXIT_FAILURE);
	}
	printf("%d/n", statements->head->n);
}
