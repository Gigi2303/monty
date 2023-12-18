#include "monty.h"

/**
 * f_pchar - this prints the character on top of the stack
 * @stack: pointer to lists for monty stack
 * @line_count: number of line opcode occurs on
 */

void f_pchar(stack_t **stack, unsigned int line_count)
{
	stack_t *temp1;

	(void)stack;

	if (statements->head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}

	temp1 = statements->head;

	if (temp1->n < 0 || temp1->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}

	printf("%c\n", temp1->n);
}
