#include "monty.h"
#include <stdio.h>

/**
 * f_sub - sub top element of stack from the second top stack
 * @stack: pointer to lists for monty stack
 * @line_count: number of line opcode occurs on
 */

void f_sub(stack_t **stack, unsigned int line_count)
{
	stack_t *temp1, *temp2;
	(void)stack;

	if (statements->s_length < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}

	temp1 = statements->head;
	temp2 = temp1->next;

	temp2->n = temp2->n - temp1->n;
	del_stacknode();
	statements->s_length -= 1;
}
