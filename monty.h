#ifndef MONTY_H
#define MONTY_H

/*LIBRARIES*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*GLOBAL VARIABLES*/
extern int Num_entered

/*STRUCTURES*/

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO Holberton project
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*PROTOTYPE FUNCTIONS*/

stack_t *push(stack_t **head, unsigned int line_number);
stack_t *pall(stack_t **head, unsigned int line_number);
void open_file(char *file);
stack_t *(get_op(char *buffer, stack_t **head, unsigned int
	line_number))(stack_t **head, unsigned int
	line_number);
void free_stack(stack_t **stack);

#endif /* MONTY_H */
