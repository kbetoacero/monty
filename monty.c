#include "monty.h"

/**
 * main - The main of our program
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 in succes 1 if fails
 **/
int main(int argc, char *argv[])
{
	FILE *fp;
	char *line = NULL;
	char *opcode;
	char *n;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{	printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	line_number = 0;
	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		opcode = strtok(line, DELIMIT);
		if (opcode == NULL || strncmp(opcode, "#", 1) == 0)
			continue;
		if (strcmp(opcode, "push") == 0)
		{
			n = strtok(NULL, DELIMIT);
			push(&stack, line_number, n);
		}
		else
			struc_opcode(opcode, &stack, line_number);
	}
	free(stack);
	free(line);
	free(fp);
	return (EXIT_SUCCESS);
}
