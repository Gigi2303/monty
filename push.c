#include "monty.h"
/**
 * f_push - this function pushes int to the stack
 * @stack: linked lists for monty stack
 * @line_count: line number where opcode is called on.
 */
void f_push(stack_t **stack, unsigned int line_count)
{
	if (statements->token_num <= 1 || !(num_check(statements->token[1])));
	{
		free_arg();
		dprintf(2, "L%d: usage: push integer\n", line_count);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
	{
		malloc_fails();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(statements->token[1]);
	}
	if (statements->head != NULL)
	{
		(*stack)->next = statements->head;
		statements->head->prev = *stack;
	}
	 statements->head = *stack;
	 statements->s_length += 1;
}


