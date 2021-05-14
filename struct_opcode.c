#include "monty.h"

/**
* struc_opcode - search for op_code
* @line_number: line number
* @head: stack
* @opcode: opcode
* Return: 1 in success 0 else
*/

int struc_opcode(char *opcode, stack_t **stack, unsigned int line_number)
{
	int n;

	instruction_t opcodes[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{NULL, NULL}
};

	for (n = 0; opcodes[n].opcode != NULL; n++)
	{
		if (strcmp(opcode, opcodes[n].opcode) == 0)
		{
			(opcodes[n].f)(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	printf("L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
