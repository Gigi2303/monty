#include "monty.h"
/**
 * f_push - this function pushes int to the stack
 * @stack: linked lists for monty stack
 * @line_count: line number where opcode is called on.
 */
void f_push(stack_t **stack, unsigned int line_count)
{
	if (statements->token_num <= 1 || !(num_check(statements->token[1])))
	{
		free_arg();
		fprintf(stderr, "L%d: usage: push integer\n", line_count);
		exit(EXIT_FAILURE);
	}

	*stack = malloc(sizeof(stack_t));
	if (*stack == NULL)
		malloc_fails();
	(*stack)->next = (*stack)->prev = NULL;
	(*stack)->n = (int) atoi(statements->token[1]);

	if (statements->head == NULL)
		statements->head = *stack;
	else
	{
		if (statements->stack)
		{
		(*stack)->next = statements->head;
		statements->head->prev = *stack;
		statements->head = *stack;
	}
		else
		{
			stack_t *temp = statements->head;

			while (temp->next)
				temp = temp->next;
			temp->next = *stack;
			(*stack)->prev = temp;
		}
	}
	 statements->s_length += 1;
}
