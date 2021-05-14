#include "monty.h"

/**
 * pall - prints all the values on the stack
 * @head: working stack
 * @line_number:line number
 * Return: nothing
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *q = *stack;
	(void) line_number;

	if (stack == NULL || *stack == NULL)
		return;

	while (q != NULL)
	{
		printf("%d\n", q->n);
		q = q->next;
	}
}
