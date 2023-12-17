#include "monty.h"

/**
 * f_div - this dividesthe top element of stack by the second top stack
 * @stack: pointer to lists for monty stack
 * @line_count: number of line opcode occurs on
 */

void f_div(stack_t **stack, unsigned int line_count)
{
	stack_t *temp1, *temp2;
	(void)stack;

	if (statements->s_length < 2)
	{
		dprintf(2, "L%d: can't div, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}

	temp1 = statements->head;
	temp2 = temp1->next;

	if (temp1->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}

	temp2->n = temp2->n / temp1->n;
	del_stacknode();
	statements->s_length -= 1;
}