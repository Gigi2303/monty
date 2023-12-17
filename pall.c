#include "monty.h"

/**
 * f_pall - pushes an element to the stack
 * @head: stack head
 * @counter: NULL
 * return: NULL
 */
void f_pall(stack_t **head, unsign int counter)
{
	stack_t *h;

	counter(void);

	h = *head;
	if (h == NULL)
	return;
	while (h)
	{
		printf("%d/n", h->n);
		h = h->next;
	}
}
