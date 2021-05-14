#include "monty.h"

/**
 * op_get - searck for the op code
 * @head: pointer to the stack list
 * @buff: buffer
 * @line_num: unused variable
 * Return: new node's address
 */

stack_t *(*op_get(char *buff, stack_t **head, unsigned int line_num))(stack_t **head, unsigned int line_number)
{
	instruction_t selector[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{NULL, NULL}
	};
	
	char *compare;
	int i = 0;

	while (selector[i].opcode != NULL)
	{
		compare = (selector[i]).opcode;
		if (strcmp(buffer, compare) == 0)
		{
			return (*(selector[i].f);
		}
		i++;
	}
	
	fprintf(stderr, "%d: unknown instruction %s\n", line_num, buff);
	free(head);
	exit(EXIT_FAILURE);
}
