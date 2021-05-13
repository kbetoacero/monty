#include "monty.h"
int Num_entered = 1;
/**
 * main - reads bytecode
 * @argc: number of args
 * @argv: arguments
 * Return: 0 on Success
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprint(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	open_file(argv[1]);
	return (0);
}
