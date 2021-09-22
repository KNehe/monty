#include "monty.h"

/**
 * perform_operation - finds a particular function
 * to perform an operation according to given code
 * @stack: pointer to stack
 * @code: pointer to operation code e.g push
 * @line_no: current line number in file source
 * Return: void
 */
void perform_operation(stack_t **stack, char *code, unsigned int line_no)
{
	int i = 0;

	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{NULL, NULL}
	};

	while (ops[i].opcode != NULL)
	{
		if (strcmp(ops[i].opcode, code)  == 0)
		{
			ops[i].f(stack, line_no);
			return;
		}
		i++;
	}
	printf("L%d: unknown instruction %s\n", line_no, code);
	/* free stack */
	exit(EXIT_FAILURE);
}
