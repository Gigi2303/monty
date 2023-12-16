#include "monty.h"

/**
 * f_swap - swaps the top two elements
 * @head: stack head
 * @counter: line_number
 * Return: NULL
 */
void f_swap(slack_t **head, unsigned int counter)
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
		printf(stderr, "L%d: can't swap, stack too short/n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE)
	}
}

