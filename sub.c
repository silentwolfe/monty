#include "monty.h"

/**
 * op_sub - Performs subtraction
 * @first: The First node
 * @increment: The line count
 * Return: Void
 */

void op_sub(stack_t **first, unsigned int increment)
{
	stack_t *xau;
	int result_sub, node_count;

	xau = *first;
	for (node_count = 0; xau != NULL; node_count++)
	{
		xau = xau->next;
	}
	if (node_count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	xau = *first;
	result_sub = xau->next->n - xau->n;
	xau->next->n = result_sub;
	*first = xau->next;
	free(xau);
}
