#include "monty.h"
/**
 * f_push - this function pushes int to the stack
 * @stack: linked lists for monty stack
 * @line_count: line number where opcode is called on.
 */
void f_push(stack_t **stack, unsigned int line_count)
{
	if (statement->token_num <= 1 || !(num_check(statement->token[1])));
	{
		free_arg();
		dprintf(2, "L%d: usage: push integer\n", line_count);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if(*stack == NULL)
	{
		malloc_fails();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(statement->token[1]);
	}
	if (statement->head != NULL)
	{
		(*stack)->next = statement->head;
		statement->head->prev = *stack;
	}
	 statement->head = *stack;
	 statement->s_length += 1;
}


