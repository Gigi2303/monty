#include "monty.h"

/**
 * fetch_instructions -  sets the instructions based on the first line token
 */
void fetch_instructions(void)
{
	int g;

	instruction_t instruct[] = {
		{"push", f_push},
		{"pall", f_pall},
		{"pint", f_pint},
		{"pop", f_pop},
		{"swap", f_swap},
		{"add", f_add},
		{"nop", f_nop},
		{"sub", f_sub},
		{"mul", f_mul},
		{"div", f_div},
		{"mod", f_mod},
		{"pchar", f_pchar},
		{"pstr", f_pstr},
		{"rotl", f_rotl},
		{"rotr", f_rotr},
		{NULL, NULL},
	};
	if (statements->token_num == 0)
		return;

	if (statements->token[0][0] == '#')
	{
		statements->instruct->opcode = "nop";
		statements->instruct->f = f_nop;
		return;
	}

	for (; instruct[g].opcode != NULL; g++)
	{
		if (strcmp(instruct[g].opcode, statements->token[0]) == 0)
		{
			statements->instruct->opcode = instruct[g].opcode;
			statements->f = instruct[g].f;
			return;
		}
	}
	instruct_error();
}

/**
 * instruct_error - this function handles unknown errors in instruction
 */
void instruct_error(void)
{
	fprintf(stderr, "L%d; Unkown instruction %s\n",
			statements->line_count, statements->token[0]);
	s_close();
	free_token();
	free_arg();
	exit(EXIT_FAILURE);
}
/**
 * run_instructions -This function runs the valid instructions from the file
 */
void run_instructions(void)
{
	stack_t *stack = NULL;

	if (statements->token_num == 0) /* Check if there are no instructions to run */
	{
		return;
	}
	else
	{
	statements->instruct->f(&stack, statements->line_count);
	}
}
