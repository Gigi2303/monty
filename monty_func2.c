#include "monty.h"

/**
 * s_close - this function closes a file stream and sets to NULL.
 */

void s_close(void)
{
	if (statements->stream == NULL)
		return;

	if (fclose(statements->stream))
	{
	statements->stream = NULL;
	}
	else
	{
		perror("Error closing file");
	}
}

/**
 * num_check - This function checks is a string represents a valid int.
 * @str: the string to check
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

/**
 * del_stacknode - this function deletes the node at the top of the stack
 *
 * Return: returns nothing
 */
void del_stacknode(void)
{
	stack_t *temp;

	temp = statements->head;
	statements->head = temp->next;
	free(temp);
}
