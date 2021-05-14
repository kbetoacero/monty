/**
 * swap - swaps the value of the top two elements on the stack
 * @stack: pointer to stack
 * @line_number: line number of instruction
 * Return: void, exit with -1 on failure
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp_a;
	int temp_b;

	if (stack_length(stack) < 2)
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp_a = (*stack)->n;
	temp_b = (*stack)->next->n;

	(*stack)->n = temp_b;
	(*stack)->next->n = temp_a;
}
