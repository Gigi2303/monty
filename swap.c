#include "monty.h"

/**
 * f_swap - this function swaps the top element of stack and second top stack
 * @stack: pointer to lists for monty stack
 * @line_count: number of line opcode occurs on
 */

void f_swap(stack_t **stack, unsigned int line_count)
{
	stack_t *temp1, *temp2;

	(void)stack;
	if (statements->s_length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_count);
		free_all();
		exit(EXIT_FAILURE);
	}
	temp1 = statements->head;
	temp2 = temp1->next;
	temp1->next = temp2->next;

	while(temp1->next)
	{
		temp1->next->prev = temp1;
		temp2->next = temp1;
		temp1->prev = temp2;
		temp2->prev = NULL;
		statements->head = temp2;
	}
}
