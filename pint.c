#include "monty.h"

/**
 * op_pint - This function prints the top
 * @first: The first node
 * @increment: The line count
 * Return: void
 */

void op_pint(stack_t **first, unsigned int increment)
{
	if (*first == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*first)->n);
}
