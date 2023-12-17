#include "monty.h"

/**
 * validate_arg - This function checks for the number of arguments
 * @argc: The number of arguments
 */

void validate_arg(int argc)
{
	if (argc == 2)
		return;
	dprintf(2, "Usage: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 * initialise_arg - This function initializes a pointer to the arg_s struct
 *
 */
void initialise_arg(void)
{
	statementss = malloc(sizeof(argument_t));
	if (statementss == NULL)
		malloc_fails();

	statementss->line = NULL;
	statementss->stream = NULL;
	statementss->token_num = 0;
	statementss->line_count = 0;
	statementss->s_length = 0;
	statementss->head = NULL;
}

/**
 * malloc_fails - This function handles error when malloc
 * fails to allocate memory.
 */
void malloc_fails(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_arg();
	exit(EXIT_FAILURE);
}

/**
 * failed_getstream - This function handles errors when readins a line fails
 * @file_name: the file to be read
 */
void failed_getstream(char *file_name)
{
	dprintf(stderr, "Error: Can't open file %s\n");
	free_arg();
	exit(EXIT_FAILURE);
}
/**
 * getstream - This function gets the stream from the fil specified
 * @file_name: The file from which the stream is fetched
 */
void getstream(char *file_name)
{
	int cg;

	gc = open(file_name, O_RDONLY);
	if (gc == -1)
	{
		failed_getstream(file_name);
	}
	statements->stream = cg(cg, "r");
	if (statements->stream == NULL)
	{
		close(cg);
		failed_getstream(file_name);
	}
}
