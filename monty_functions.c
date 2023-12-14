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
	statements = malloc(sizeof(argument_t));
	if (statements == NULL)
		malloc_fails();

	statement->line = NULL;
	statement->stream = NULL;
	statement->token_num = 0;
	statement->line_count = 0;
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
	free_args();
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
	statement->stream = cg(cg, "r");
	if (statement->stream == NULL)
	{
		close(cg);
		failed_getstream(file_name);
	}
}
