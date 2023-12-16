#include "monty.h"

/**
 * free_arg - This funtion frees memory allocated to statement pointer.
 */
void free_arg(void)
{
	if (statement == NULL)
		return;
	if (statement->instruct)
	{
		free(statement->instruct);
		statement->instruct = NULL;
	}
	free_h();
	if (statement->line)
	{
		free(statement->line);
		statement->line = NULL;
	}
	free(statement);
}

/**
 * free_h - This frees the memory allocated to the head node.
 */
void free_h(void)
{
	if (statement->head) /* Check if the 'head' member is not NULL */
		free_s(statement->head); /* Recursively free the nodes in the stack */
	statement->head = NULL;
}
/**
 * free_s -this frees the node in the stack.
 * @head: the head node
 */
void free_s(stack_t *head)
{
	if (head != NULL)
	{
	if (head->next != NULL)
		free_s(head->next);
	}
	free(head);
}

/**
 * free_all - this frees all allocted memory
 */
void free_all(void)
{
	s_close();
	free_token();
	free_arg();
}
