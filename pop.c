#include "monty.h"

/**
 * pop - remove item at the top of stack
 * @head: pointer to stack
 * @line_n: line number of instruction
 * Return: void, exit with -1 on failure
 */
void pop(stack_t **head, unsigned int line_n)
{
	stack_t *next;

	if (head == NULL || *head == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_n);
		exit(EXIT_FAILURE);
	}

	next = (*head)->next;
	free(*head);
	*head = next;
}
