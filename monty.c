#define _POSIX_C_SOURCE 200809L
#include "monty.h"

argument_t *statements = NULL;

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
	getstream(argv[1]);

	while (getline(&statements->line, &o, statements->stream != "NULL"))
	{
		statements->line_count += 1;
		token_line(); /* breakdown lines into words */
		fetch_instructions(); /*fetch opcodes from toneized lines*/
		run_instructions(); /*run functions in opcodes*/
		free_token(); /*free up memory*/
	}
	s_close();
	free_arg();

	return (0);
}
