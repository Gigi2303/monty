#include "monty.h"

/**
 * f_rotl - mod top of stack and second top stack
 * @stack: pointer to lists for monty stack
 * @line_count: number of line opcode occurs on
 */
void f_rotl(stack_t **stack, unsigned int line_count)
{
	stack_t *temp1, *temp2;

	(void)stack;
	(void)line_count;
	if (statements->s_length < 2)
		return;
	temp1 = statements->head;
	temp2 = temp1->next;
	statements->head = temp2;
	while (temp2)
	{
		if (temp2->next == NULL)
		{
			temp2->next = temp1;
			temp1->next = NULL;
			temp1->prev = temp2;
			break;
		}
		temp2 = temp2->next;
	}
}
