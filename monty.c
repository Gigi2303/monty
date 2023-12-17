#include "monty.h"

argument_t *statementss = NULL;

/**
 * main - This is the main entry function for monty program
 * @argc: int num of command line arguments
 * @argv: pointer to a string of command line arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	size_t o;

	validate_arg(argc);
	initialise_arg();
	get_stream(argv[1]);

	while (getline(&statementss->line, &o, statementss->stream != -1))
	{
		statementss->line_num += 1;
		token_line(); /* breakdown lines into words */
		fetch_instructions(); /*fetch opcodes from toneized lines*/
		run_instructions(); /*run functions in opcodes*/
		free_token(); /*free up memory*/
	}
	s_close();
	free_arg();

	return (0);
}
