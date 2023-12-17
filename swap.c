#include "monty.h"

/**
 * f_swap - swaps the top two elements
 * @head: stack head
 * @line_count: line_number
 * Return: NULL
 */

void f_swap(stack_t **head, unsigned int line_count)
{
	slack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		printf(stderr, "L%d: can't swap, stack too short/n", line_count);
		fclose(bus.file);
		free(bus.content);
		free_s(*head);
		exit(EXIT_FAILURE)
	}
}

