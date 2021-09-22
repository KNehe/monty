#include "monty.h"

/**
 * push - adds a node to the beginning of the stack
 * @stack: double pointer to stack
 * @line_number: line_number in source file
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (stack == NULL)
	{
		printf("L%d: unknown stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		/* free stack */
		exit(EXIT_FAILURE);	
	}
	new->n = value;
	new->prev = NULL;
	new->next = *stack;
	
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
