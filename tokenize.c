#include "monty.h"

/**
 * token_line - This function breaks the line into words
 *
 */

void token_line(void)
{
	int c = 0;
	char *delim = " \n";
	char *token = NULL, *temp = NULL;

	temp = malloc(sizeof(char) * (strlen(statements->line) + 1));
	strcpy(temp, statements->line);
	statements->token_num = 0;
	token = strtok(temp, delim);

	while (token)
	{
		statements->token_num += 1;
		token = strtok(NULL, delim);
	}
	statements->token = malloc(sizeof(char *) * (statements->token_num + 1));
	strcpy(temp, statements->line);
	while (token)
	{
		statements->token[c] = malloc(sizeof(char) * (strlen(token) + 1));
		if (statements->token[c] == NULL)
		malloc_fails();

		strcpy(statements->token[c], token);
		token = strtok(NULL, delim);
		c++;
	}
	statements->token[c] = NULL;
	free(temp);
}

/**
 * free_token - this function frees the memory assigned to tokens
 */
void free_token(void)
{
	int cg;

	if (NULL == statements->token)
		return;
	while (statements->token[cg])
	{
		free(statements->token[cg]);
		cg++;
	}
	free(statements->token);
	statements->token = NULL;
}
