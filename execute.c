#include "monty.h"

/**
 * execute - This function executes the opcodes
 * @stack: The head linked list
 * @increment: The line count
 * @file: The pointer to the file monty
 * @file_content: The file liine content
 * Return: integer
 */

int execute(char *file_content, stack_t **stack, unsigned int increment, FILE *file)
{
	instruction_t operts[] = {
		{"push", op_push},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{"sub", op_sub},
		{"div", op_div},
		{"mul", op_mul},
		{"pall", op_pall},
		{"mod", op_mod},
		{"pchar", op_pchar},
		{"pstr", op_pstr},
		{"rotl", op_rotl},
		{"rotr", op_rotr},
		{"queue", op_queue},
		{"stack", op_stack},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *operation;

	operation = strtok(file_content, " \n\t");
	if (operation && operation[0] == '#')
	{
		return (0);
	}
	buff.arg = strtok(NULL, " \n\t");
	while (operts[i].opcode && operation)
	{
		if (strcmp(operation, operts[i].opcode) == 0)
		{
			operts[i].f(stack, increment);
			return (0);
		}
		i++;
	}
	if (operation && operts[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", increment, operation);
		fclose(file);
		free(file_content);
		op_free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
