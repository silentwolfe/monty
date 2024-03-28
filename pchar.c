#include "monty.h"

/**
 * op_pchar - This function prints the characters from the top
 * @first: The first stack
 * @increment: The line count
 * Return: Void
 */

void op_pchar(stack_t **first, unsigned int increment)
{
	stack_t *head;

	head = *first;
	if (!head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", increment);
		fclose(buff.file);
		free(buff.file_content);
		op_free_stack(*first);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head->n);
}
