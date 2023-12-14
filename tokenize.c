#include "main.h"

/**
 * token_line - This function breaks the line into words
 *
 */

void token_line(void)
{
	int c = 0;
	char *delim = " \n";
	char *token = NULL, *temp = NULL;

	temp = malloc(sizeof(char) * (strlen(statement->line) + 1));
	strcpy(temp, statements->line);
	statement->token_num = 0;
	token = strtok(temp, delim);

	while (token)
	{
		statement->token_num += 1;
		token = strtok(NULL, delim);
	}
	statement->token = malloc(sizeof(char *) * (statement->token_num + 1));
	strcpy(temp, statement->line);
	while (token)
	{
		statement->token[c] = malloc(sizeof(char) * (strlen(token) + 1));
		if (statement->token[c] == NULL)
		malloc_fails();
		strcpy(statement->token[c], token);
		token = strok(NULL, delim);
		c++;
	}
	statement->token[c];
	free(temp);
}
