#include "monty.h"

/**
 * f_pstr - this functn prints the string starting from the top stack
 * @stack: pointer to lists for monty stack
 * @line_count: number of line opcode occurs on
 */

void f_pstr(stack_t **stack, unsigned int line_count)
{
	stack_t *temp;

	(void)stack;
	(void)line_count;

	temp = statements->head;
	while (temp != NULL)
	{
		if (temp->n <= 0 || temp->n > 127)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}

