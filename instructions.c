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
	if (statement->token_num == 0)
		return;
	for (; instruct[g].opcode != NULL; g++)
	{
		if (strcmp(instruct[g].opcode, statement->token[0]) == 0)
		{
			statement->instruct->opcode = instruct[g].opcode;
			statement->f = instruct[g].f;
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
			statement->line_count, statement_token[0]);
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

	if (statement->token_num == 0) /* Check if there are no instructions to run */
	{
		return;
	}
	else
	{
	statement->instruct->f(&stack, statement->line_num); /** Execute the instruction function */
	}
}
