#include "monty.h"

/**
 * f_pall - prints stack
 * @counter: no used
 * @head: head of the stack
 * Return: Nothing
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}

