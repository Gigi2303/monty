#include "monty.h"

/**
 * s_close - this function closes a file stream and sets to NULL.
 */

void s_close(void)
{
	if (statement->stream == NULL)
		return;

	if (fclose(statement->stream))
	{
	statement->stream = NULL;
	}
	else
	{
		perror("Error closing file");
	}
}

/**
 * num_check - This function checks is a string represents a valid int.
 * @str: the string to check
 * 
 * Return: Returns 1 if valid and 0 if invalid.
 */
int num_check(char *str)
{
	int g = 0;

	while (str[g])
	{
		if (g == 0 && str[g] == '-' && str[g + 1])
		{
			g++;
			continue;
		}
		if (str[g] < '0' || str[g] > 'a')
		{
			return (0);
			g++;
		}
	}
	return (1);
}
