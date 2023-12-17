#include "monty.h"

/**
 * validate_arg - This function checks for the number of arguments
 * @argc: The number of arguments
 */

void validate_arg(int argc)
{
	if (argc == 2)
		return;
	fprintf(stderr, "Usage: monty file\n");
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

	statements->line = NULL;
	statements->stream = NULL;
	statements->token_num = 0;
	statements->line_count = 0;
	statements->s_length = 0;
	statements->head = NULL;
	statements->stack = 1;
}

/**
 * malloc_fails - This function handles error when malloc
 * fails to allocate memory.
 */
void malloc_fails(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_arg();
	exit(EXIT_FAILURE);
}

/**
 * failed_getstream - This function handles errors when readins a line fails
 * @file_name: the file to be read
 */
void failed_getstream(char *file_name)
{
	fprintf(stderr, "Error: Can't open file %s\n", file_name);
	free_arg();
	exit(EXIT_FAILURE);
}
/**
 * getstream - This function gets the stream from the fil specified
 * @file_name: The file from which the stream is fetched
 */
void getstream(char *file_name)
{
	FILE *cg;

	cg = fopen(file_name, "r");
	if (cg == NULL)
	{
		failed_getstream(file_name);
	}

	statements->stream = fopen(file_name, "r");
	if (statements->stream == NULL)
	{
		fclose(cg);
		failed_getstream(file_name);
	}
}
