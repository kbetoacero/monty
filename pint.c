#include "monty.h"

/**
 * pint - prints value at the top of the stack, plus new line
 * @head: pointer to stack
 * @line_n: line number of instruction
 * Return: void
 */
void pint(stack_t **head, unsigned int line_n)
{
	int val;

	if (head == NULL || *head == NULL)
	{
		printf("L%d: can't pint, stack empty\n", line_n);
		exit(EXIT_FAILURE);
	}

	val = (*head)->n;
	printf("%d\n", val);
}
