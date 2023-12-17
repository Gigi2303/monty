#include "monty.h"

/**
 * fetch_instructions -  sets the instructions based on the first line token
 */
void fetch_instructions(void)
{
	int g;

	instruction_t instruct[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{NULL, NULL},
	};
	if (statements->token_num == 0)
		return;

	if (statements->token[0][0] == '#')
	{
		statements->instruct->opcode = "nop";
		statements->instruct->f = nop;
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
	dprintf(2, "L%d; Unkown instruction %s\n",
			statements->line_count, statements_token[0]);
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
	statements->instruct->f(&stack, statements->line_num);
	}
}
