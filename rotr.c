#include "monty.h"

/**
 * f_rotr - mod top of stack and second top stacks
 * @stack: pointer to lists for monty stack
 * @line_count: number of line opcode occurs on
 */
void f_rotr(stack_t **stack, unsigned int line_count)
{
	stack_t *temp, *last;

	(void)stack;
	(void)line_count;
	if (statements->s_length < 2)
		return;
	temp = statements->head;
	while (temp)
	{
		if (temp->next == NULL)
		{
			last = temp;
			break;
		}
		temp = temp->next;
	}
	last->prev->next = NULL;
	last->next = statements->head;
	last->prev = NULL;

	statements->head = last;
}
