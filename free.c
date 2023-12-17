#include "monty.h"

/**
 * free_arg - This funtion frees memory allocated to statements pointer.
 */
void free_arg(void)
{
	if (statements == NULL)
		return;
	if (statements->instruct)
	{
		free(statements->instruct);
		statements->instruct = NULL;
	}
	free_h();
	if (statements->line)
	{
		free(statements->line);
		statements->line = NULL;
	}
	free(statements);
}

/**
 * free_h - This frees the memory allocated to the head node.
 */
void free_h(void)
{
	if (statements->head) /* Check if the 'head' member is not NULL */
		free_s(statements->head); /* Recursively free the nodes in the stack */
	statements->head = NULL;
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
