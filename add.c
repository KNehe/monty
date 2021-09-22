#include "monty.h"

/**
 * adds - adds the top two elements of the stack
 * @stack: double pointer to stack
 * @line_no: current line number in source file
 * Return: void
 */
void add(stack_t **stack, unsigned int line_no)
{
	int sum;
	stack_t *temp, *next;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", line_no);
		/* free stack */
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	next = (*stack)->next;

	sum = temp->n + next->n;
	next->n = sum;
	
	*stack = next;
	free(temp);
}
